@class NSSet, NSString, NSArray, HMFMessage;

@interface HMFMessageFilter : HMFObject <HMFLogging, HMFObject>

@property (class, readonly, copy) NSSet *policyClasses;

@property (readonly, copy) HMFMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (BOOL)canInitWithMessage:(id)a0;

- (id)initWithMessage:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (BOOL)acceptWithPolicies:(id)a0 error:(id *)a1;

@end
