@class NSString, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, PRUpdatingDelegate;

@interface PRUpdater : NSObject <PRUpdatingService_toExtension> {
    id<PRUpdatingDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_lock_connections;
    NSMutableArray *_lock_callOutBlocks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_dequeueNextCallOutIfPossible;
- (void)_disconnect:(id)a0;
- (id)initWithDelegate:(id)a0;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)_enqueueCallOut:(id /* block */)a0;
- (oneway void)updateConfiguration:(id)a0 sessionInfo:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (oneway void)updateDescriptors:(id)a0 sessionInfo:(id)a1 completion:(id /* block */)a2;

@end
