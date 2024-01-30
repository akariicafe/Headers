@class _GEOConfigKeyHelper, NSObject;
@protocol OS_dispatch_queue, GEOConfigChangeListenerDelegate;

@interface _GEOConfigChangedListener : NSObject

@property (weak, nonatomic) _GEOConfigKeyHelper *keyHelper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ block;
@property (weak, nonatomic) id<GEOConfigChangeListenerDelegate> delegate;

+ (id)listenerForKeyHelper:(id)a0 queue:(id)a1 delegate:(id)a2;
+ (id)listenerForKeyHelper:(id)a0 queue:(id)a1 block:(id /* block */)a2;

- (void).cxx_destruct;
- (void)callListener;
- (id)description;

@end
