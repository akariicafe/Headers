@class NSUUID, NSString, NSObject;
@protocol OS_dispatch_queue, OS_os_log, OS_dispatch_source;

@interface UARPPowerLogAccessory : NSObject {
    NSString *_modelNumber;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_source> *_stagingWindowTimer;
    long long _stagingWindowTimerIntervalNS;
    unsigned int _stagingWindowStartOffset;
    BOOL _stagingWindowStartOffsetInitialUpdateComplete;
    unsigned int _stagingWindowBytesTransferred;
    NSString *_stagingActiveFirmwareVersion;
    NSString *_stagingStagingFirmwareVersion;
}

@property (readonly) NSUUID *uuid;
@property (readonly) BOOL reachable;
@property (readonly) BOOL stagingInProgress;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)stagingStopped;
- (void)startStagingWindowTimer;
- (void)resetStagingWindowStartOffset;
- (void)stagingWindowTimeFired;
- (void)setStagingWindowStartOffset:(unsigned int)a0;
- (id)initWithModelNumber:(id)a0 uuid:(id)a1 stagingWindowPeriodSeconds:(unsigned int)a2;
- (void)setReachableWithActiveFirmwareVersion:(id)a0 stagedFirmwareVersion:(id)a1;
- (void)setUnreachable;
- (void)setAssetOfferedWithVersion:(id)a0 activeFirmwareVersion:(id)a1;
- (void)setStagingCompleteForStagedFirmareVersion:(id)a0 activeFirmareVersion:(id)a1 status:(unsigned long long)a2;
- (void)updateStagingProgressWithRequestedOffset:(unsigned int)a0 requestedLength:(unsigned int)a1;

@end
