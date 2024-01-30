@class NSArray, NSString, NSOperationQueue, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MPRequest : NSObject <MPRequestCancellationToken, _MPStateDumpPropertyListTransformable, NSCopying>

@property (readonly, nonatomic) NSOperationQueue *calloutQueue;
@property (readonly, nonatomic) NSError *cancelationError;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cleanupQueue;
@property (readonly, nonatomic) NSOperationQueue *queue;
@property (copy, nonatomic) NSArray *middlewareClasses;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) double timeoutInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)responseClass;
+ (double)expectedMaximumResponseTimeInterval;

- (void)cancel;
- (id)performWithCompletion:(id /* block */)a0;
- (id)_stateDumpObject;
- (void)_performWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)prepareForResponseWithCompletion:(id /* block */)a0;

@end
