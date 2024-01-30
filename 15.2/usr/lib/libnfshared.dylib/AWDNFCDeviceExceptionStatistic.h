@class NSData;

@interface AWDNFCDeviceExceptionStatistic : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _failForwardRestoreAttemptFailureCount;
    unsigned int _failForwardState;
    unsigned int _hwCount;
    unsigned int _loadStackFirmwareRestoreRetryCount;
    unsigned int _mwCount;
    unsigned int _pllUnlock;
    unsigned int _pllUnlockDuringPMICPowerCycle;
    unsigned int _readerModeConnectErrorCount;
    unsigned int _readerModeDisconnectErrorCount;
    unsigned int _readerModeTransceiveErrorCount;
    unsigned int _restrictedModeCount;
    unsigned int _seRemovedEvt0Count;
    unsigned int _seRemovedEvt1Count;
    unsigned int _seRemovedEvt2Count;
    unsigned int _seRemovedEvt3Count;
    unsigned int _seRemovedEvt4Count;
    unsigned int _seRemovedEvt5Count;
    unsigned int _seosRemovedCount;
    unsigned int _seosRestrictedModeCount;
    NSData *_uuidReference;
    struct { unsigned char timestamp : 1; unsigned char failForwardRestoreAttemptFailureCount : 1; unsigned char failForwardState : 1; unsigned char hwCount : 1; unsigned char loadStackFirmwareRestoreRetryCount : 1; unsigned char mwCount : 1; unsigned char pllUnlock : 1; unsigned char pllUnlockDuringPMICPowerCycle : 1; unsigned char readerModeConnectErrorCount : 1; unsigned char readerModeDisconnectErrorCount : 1; unsigned char readerModeTransceiveErrorCount : 1; unsigned char restrictedModeCount : 1; unsigned char seRemovedEvt0Count : 1; unsigned char seRemovedEvt1Count : 1; unsigned char seRemovedEvt2Count : 1; unsigned char seRemovedEvt3Count : 1; unsigned char seRemovedEvt4Count : 1; unsigned char seRemovedEvt5Count : 1; unsigned char seosRemovedCount : 1; unsigned char seosRestrictedModeCount : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
