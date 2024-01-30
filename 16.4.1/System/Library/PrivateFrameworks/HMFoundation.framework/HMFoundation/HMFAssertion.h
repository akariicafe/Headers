@class NSString;

@interface HMFAssertion : HMFObject <HMFLogging>

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *uniqueDescription;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bundleIdentifier;
+ (id)logCategory;

- (id)logIdentifier;
- (id)initWithName:(id)a0;
- (BOOL)acquire:(id *)a0;
- (void)mark;
- (void)dealloc;
- (id)init;
- (id)attributeDescriptions;
- (void)invalidate;
- (void).cxx_destruct;

@end
