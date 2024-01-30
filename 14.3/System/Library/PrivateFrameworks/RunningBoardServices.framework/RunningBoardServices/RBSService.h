@class NSString, NSMutableSet, RBSConnection, NSObject;
@protocol OS_dispatch_queue, RBSServiceDelegate;

@interface RBSService : NSObject <RBSConnectionServiceDelegate> {
    id<RBSServiceDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_inheritances;
    RBSConnection *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)didReceiveInheritances:(id)a0;
- (void)dealloc;
- (void)didLoseInheritances:(id)a0;
- (id)inheritances;

@end
