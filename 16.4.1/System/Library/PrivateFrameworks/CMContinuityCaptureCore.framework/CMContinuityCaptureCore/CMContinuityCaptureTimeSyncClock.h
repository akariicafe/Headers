@class NSString, NSObject, TSgPTPClock;
@protocol OS_dispatch_source;

@interface CMContinuityCaptureTimeSyncClock : NSObject {
    TSgPTPClock *_ptpClock;
    NSObject<OS_dispatch_source> *_heartBeatTimer;
}

@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic) unsigned long long grandMasterIdentifier;
@property (retain, nonatomic) NSString *clockDeviceUID;
@property (readonly, nonatomic, getter=isConnectedToPeer) BOOL connectedToPeer;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (void)startEmittingHeartBeatSignposts;
- (unsigned long long)domainTimeForMachAbsoluteTime:(unsigned long long)a0;
- (unsigned long long)machAbsoluteTimeForDomainTime:(unsigned long long)a0;
- (void)stopEmittingHeartBeatSignposts;

@end
