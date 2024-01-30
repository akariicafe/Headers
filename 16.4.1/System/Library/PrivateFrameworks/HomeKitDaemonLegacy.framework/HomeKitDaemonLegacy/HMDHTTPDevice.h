@class NSUUID, NSString;

@interface HMDHTTPDevice : HMFObject <HMFLogging>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;

- (id)logIdentifier;
- (id)initWithIdentifier:(id)a0;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionWithPointer:(BOOL)a0;

@end
