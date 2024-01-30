@class NSSet, NSArray, NSObject;
@protocol OS_dispatch_queue, _EXQueryObserverDelegate;

@interface _EXQueryObserver : NSObject <_EXActiveQueryObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _extensionsLock;
}

@property (retain, nonatomic) NSSet *internalExtensions;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } *extensionsLock;
@property (readonly) NSObject<OS_dispatch_queue> *notificationQueue;
@property (readonly, weak) id<_EXQueryObserverDelegate> delegate;
@property (readonly) NSArray *extensions;
@property (readonly, copy) NSArray *queries;

- (void).cxx_destruct;
- (void)suspend;
- (void)resume;
- (void)dealloc;
- (void)query:(id)a0 resultDidUpdate:(id)a1;
- (struct os_unfair_lock_s { unsigned int x0; } *)extensionsLock;
- (void)resultDidUpdate:(id)a0;
- (id)initWithQueries:(id)a0 delegate:(id)a1;

@end
