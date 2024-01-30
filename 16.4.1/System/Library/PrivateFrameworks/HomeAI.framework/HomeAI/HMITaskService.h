@class NSString;

@interface HMITaskService : HMFObject <HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedClasses;
+ (id)logCategory;
+ (id)taskService;
+ (id)taskServiceClient;

- (BOOL)cancelTask:(int)a0;
- (id)initPrivate;
- (int)submitTaskWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (int)submitTask:(id)a0 progressHandler:(id /* block */)a1 completionHander:(id /* block */)a2;
- (int)submitTaskWithOptions:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
