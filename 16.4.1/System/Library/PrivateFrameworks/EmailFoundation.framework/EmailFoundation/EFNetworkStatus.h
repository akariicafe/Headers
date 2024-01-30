@class NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue, OS_nw_path;

@interface EFNetworkStatus : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _currentPathLock;
}

@property (class, readonly, nonatomic) EFNetworkStatus *external;
@property (class, readonly, nonatomic) EFNetworkStatus *cellular;
@property (class, readonly, nonatomic) EFNetworkStatus *wifi;
@property (class, readonly, nonatomic) EFNetworkStatus *wired;

@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue;
@property (readonly, nonatomic) NSObject<OS_nw_path> *currentPath;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic, getter=isExpensive) BOOL expensive;
@property (readonly, nonatomic, getter=isConstrained) BOOL constrained;

- (id)initWithInterfaceType:(int)a0;
- (void).cxx_destruct;
- (id)initWithPathMonitor:(id)a0;

@end
