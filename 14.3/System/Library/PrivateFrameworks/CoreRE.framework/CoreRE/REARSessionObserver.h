@class NSString, ARSession, NSMutableSet;

@interface REARSessionObserver : NSObject <ARInternalSessionObserver> {
    ARSession *_session;
    NSMutableSet *_activeChunks;
    struct Queue<QueuedUpdateMessage> { struct Allocator *m_allocator; unsigned long long m_capacity; unsigned long long m_size; unsigned long long m_head; unsigned int m_version; struct QueuedUpdateMessage *m_data; } _queuedUpdates;
    struct UnfairLock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } m_lock; } _queueLock;
    struct { void /* unknown type, empty encoding */ columns[4]; } _renderTransform;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)session:(id)a0 didAddAnchors:(id)a1;
- (void)session:(id)a0 didUpdateAnchors:(id)a1;
- (void)session:(id)a0 didRemoveAnchors:(id)a1;
- (void)dealloc;
- (id).cxx_construct;
- (void)session:(id)a0;
- (struct Queue<QueuedUpdateMessage> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; struct QueuedUpdateMessage *x5; })getQueuedUpdatesSinceLast;

@end
