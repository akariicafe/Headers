@class NSObject;
@protocol OS_nw_path_monitor;

@interface HFNetworkMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *networkPathMonitor;
@property (nonatomic) int currentNetworkPathStatus;

+ (id)networkMonitorWithStatusBlock:(id /* block */)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithStatusBlock:(id /* block */)a0;

@end
