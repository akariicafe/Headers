@class NSString, NSArray;

@interface HMDAppleAccountContext : HMFObject <HMFObject>

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *username;
@property (readonly, copy) NSString *alternateDSID;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAccount:(id)a0;

@end
