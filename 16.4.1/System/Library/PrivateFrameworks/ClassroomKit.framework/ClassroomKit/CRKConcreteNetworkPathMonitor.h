@class CRKConcreteNetworkPath, NSString, NSObject;
@protocol OS_nw_path_monitor;

@interface CRKConcreteNetworkPathMonitor : NSObject <CRKNetworkPathMonitor>

@property (readonly, nonatomic) NSObject<OS_nw_path_monitor> *underlyingPathMonitor;
@property (retain, nonatomic) CRKConcreteNetworkPath *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)updateWithPath:(id)a0;
- (id)initWithUnderlyingPathMonitor:(id)a0;

@end
