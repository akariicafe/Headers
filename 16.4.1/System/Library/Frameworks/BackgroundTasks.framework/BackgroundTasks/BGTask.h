@class NSObject, NSString, _DASActivity;
@protocol OS_dispatch_queue;

@interface BGTask : NSObject

@property (retain, nonatomic, setter=_setActivity:) _DASActivity *_activity;
@property (nonatomic, setter=_setCompleted:) BOOL _completed;
@property (nonatomic, setter=_setLock:) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
@property (retain, nonatomic, setter=_setHandlerQueue:) NSObject<OS_dispatch_queue> *_handlerQueue;
@property (copy, nonatomic, setter=_setCompletionHandler:) id /* block */ _completionHandler;
@property (readonly, copy) NSString *identifier;
@property (copy) id /* block */ expirationHandler;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setTaskCompletedWithSuccess:(BOOL)a0;
- (void)_callExpirationHandler;
- (id)_initWithIdentifier:(id)a0 activity:(id)a1;
- (void)_setTaskCompletedWithSuccess:(BOOL)a0 actionsIfNotAlreadyCompleted:(id /* block */)a1;
- (id /* block */)_unsafe_setTaskCompletedWithSuccess:(BOOL)a0 afterDelay:(double)a1;

@end
