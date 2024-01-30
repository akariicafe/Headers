@class NSString;

@interface HMITaskService : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedClasses;
+ (id)logCategory;
+ (id)taskServiceClient;
+ (id)taskService;

@end
