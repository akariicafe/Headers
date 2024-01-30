@class NSArray, NSString, NSOperationQueue, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface MPRequest : NSObject <NSCopying, NSObject>

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

- (id)performWithCompletion:(id /* block */)a0;
- (void)_performWithCompletion:(id /* block */)a0;
- (void)prepareForResponseWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stateDumpObject;
- (void)cancel;

@end
