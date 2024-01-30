@class NSString, NUPriority, NSObject, NURenderContext;
@protocol OS_dispatch_queue;

@interface NURenderClient : NSObject

@property (copy) NSString *name;
@property (readonly) NSObject<OS_dispatch_queue> *responseQueue;
@property (retain, nonatomic) NURenderContext *renderContext;
@property (copy) id /* block */ genericCompletionBlock;
@property (nonatomic) BOOL shouldCoalesceUpdates;
@property (retain) NUPriority *priority;

- (id)initWithName:(id)a0;
- (void)cancel;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 responseQueue:(id)a1;
- (void)submitGenericRequest:(id)a0;
- (void)submitGenericRequest:(id)a0 completion:(id /* block */)a1;

@end
