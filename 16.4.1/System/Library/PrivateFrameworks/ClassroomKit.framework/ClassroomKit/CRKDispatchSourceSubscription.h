@class NSObject;
@protocol OS_dispatch_source;

@interface CRKDispatchSourceSubscription : NSObject <CRKCancelable>

@property (readonly, nonatomic) NSObject<OS_dispatch_source> *source;
@property (copy, nonatomic) id /* block */ handler;

+ (id)subscriptionWithSource:(id)a0 handler:(id /* block */)a1;

- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithSource:(id)a0 handler:(id /* block */)a1;

@end
