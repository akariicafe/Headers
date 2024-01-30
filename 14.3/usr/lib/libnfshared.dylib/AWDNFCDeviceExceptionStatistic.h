@class NSData;

@interface AWDNFCDeviceExceptionStatistic : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char failForwardRestoreAttemptFailureCount : 1; unsigned char failForwardState : 1; unsigned char hwCount : 1; unsigned char loadStackFirmwareRestoreRetryCount : 1; unsigned char mwCount : 1; unsigned char pllUnlock : 1; unsigned char pllUnlockDuringPMICPowerCycle : 1; unsigned char readerModeConnectErrorCount : 1; unsigned char readerModeDisconnectErrorCount : 1; unsigned char readerModeTransceiveErrorCount : 1; unsigned char restrictedModeCount : 1; unsigned char seRemovedEvt0Count : 1; unsigned char seRemovedEvt1Count : 1; unsigned char seRemovedEvt2Count : 1; unsigned char seRemovedEvt3Count : 1; unsigned char seRemovedEvt4Count : 1; unsigned char seRemovedEvt5Count : 1; unsigned char seosRemovedCount : 1; unsigned char seosRestrictedModeCount : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasUuidReference;
@property (retain, nonatomic) NSData *uuidReference;
@property (nonatomic) BOOL hasMwCount;
@property (nonatomic) unsigned int mwCount;
@property (nonatomic) BOOL hasHwCount;
@property (nonatomic) unsigned int hwCount;
@property (nonatomic) BOOL hasRestrictedModeCount;
@property (nonatomic) unsigned int restrictedModeCount;
@property (nonatomic) BOOL hasSeRemovedEvt0Count;
@property (nonatomic) unsigned int seRemovedEvt0Count;
@property (nonatomic) BOOL hasSeRemovedEvt1Count;
@property (nonatomic) unsigned int seRemovedEvt1Count;
@property (nonatomic) BOOL hasSeRemovedEvt2Count;
@property (nonatomic) unsigned int seRemovedEvt2Count;
@property (nonatomic) BOOL hasSeRemovedEvt3Count;
@property (nonatomic) unsigned int seRemovedEvt3Count;
@property (nonatomic) BOOL hasSeRemovedEvt4Count;
@property (nonatomic) unsigned int seRemovedEvt4Count;
@property (nonatomic) BOOL hasSeRemovedEvt5Count;
@property (nonatomic) unsigned int seRemovedEvt5Count;
@property (nonatomic) BOOL hasPllUnlock;
@property (nonatomic) unsigned int pllUnlock;
@property (nonatomic) BOOL hasPllUnlockDuringPMICPowerCycle;
@property (nonatomic) unsigned int pllUnlockDuringPMICPowerCycle;
@property (nonatomic) BOOL hasSeosRestrictedModeCount;
@property (nonatomic) unsigned int seosRestrictedModeCount;
@property (nonatomic) BOOL hasSeosRemovedCount;
@property (nonatomic) unsigned int seosRemovedCount;
@property (nonatomic) BOOL hasReaderModeConnectErrorCount;
@property (nonatomic) unsigned int readerModeConnectErrorCount;
@property (nonatomic) BOOL hasReaderModeDisconnectErrorCount;
@property (nonatomic) unsigned int readerModeDisconnectErrorCount;
@property (nonatomic) BOOL hasReaderModeTransceiveErrorCount;
@property (nonatomic) unsigned int readerModeTransceiveErrorCount;
@property (nonatomic) BOOL hasLoadStackFirmwareRestoreRetryCount;
@property (nonatomic) unsigned int loadStackFirmwareRestoreRetryCount;
@property (nonatomic) BOOL hasFailForwardRestoreAttemptFailureCount;
@property (nonatomic) unsigned int failForwardRestoreAttemptFailureCount;
@property (nonatomic) BOOL hasFailForwardState;
@property (nonatomic) unsigned int failForwardState;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
