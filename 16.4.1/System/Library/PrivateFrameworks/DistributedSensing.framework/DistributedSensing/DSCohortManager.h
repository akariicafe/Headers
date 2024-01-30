@class DSConsensusDataManager, DSXPCServer, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface DSCohortManager : NSObject {
    DSConsensusDataManager *_dataManager;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) DSXPCServer *xpcDaemonServer;
@property (retain, nonatomic) NSMutableDictionary *devices;

- (void)deviceFound:(id)a0;
- (void)deviceLost:(id)a0;
- (void).cxx_destruct;
- (void)_deviceFound:(id)a0;
- (void)_deviceLost:(id)a0;
- (void)printConsensusData;
- (void)printConsensusDataFromWindowStart:(double)a0 ToWindowEnd:(double)a1;

@end
