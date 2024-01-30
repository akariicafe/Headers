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

+ (BOOL)saveEndowment:(id)a0 forKey:(id)a1 withError:(out id *)a2;

- (id)inheritances;
- (void)didLoseInheritances:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)didReceiveInheritances:(id)a0;

@end
