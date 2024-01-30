@interface AWDWRMLinkPrefChange2 : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char count : 1; unsigned char nCallActive : 1; unsigned char nCallIdle : 1; unsigned char nCelluarBadEcio : 1; unsigned char nCelluarBadLQM : 1; unsigned char nCelluarBadRSRP : 1; unsigned char nCelluarBadSignal : 1; unsigned char nCellularNotReady : 1; unsigned char nData : 1; unsigned char nHandoverNotPerformed : 1; unsigned char nHandoverPerformed : 1; unsigned char nHandoverUnknown : 1; unsigned char nRunning : 1; unsigned char nStationary : 1; unsigned char nStatusUpdateDelayBin1 : 1; unsigned char nStatusUpdateDelayBin2 : 1; unsigned char nStatusUpdateDelayBin3 : 1; unsigned char nStatusUpdateDelayBin4 : 1; unsigned char nStatusUpdateDelayBin5 : 1; unsigned char nStatusUpdateDelayBin6 : 1; unsigned char nVehicular : 1; unsigned char nVoice : 1; unsigned char nWalking : 1; unsigned char nWifiGood : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasNCallIdle;
@property (nonatomic) unsigned int nCallIdle;
@property (nonatomic) BOOL hasNCallActive;
@property (nonatomic) unsigned int nCallActive;
@property (nonatomic) BOOL hasNData;
@property (nonatomic) unsigned int nData;
@property (nonatomic) BOOL hasNVoice;
@property (nonatomic) unsigned int nVoice;
@property (nonatomic) BOOL hasNStationary;
@property (nonatomic) unsigned int nStationary;
@property (nonatomic) BOOL hasNWalking;
@property (nonatomic) unsigned int nWalking;
@property (nonatomic) BOOL hasNRunning;
@property (nonatomic) unsigned int nRunning;
@property (nonatomic) BOOL hasNVehicular;
@property (nonatomic) unsigned int nVehicular;
@property (nonatomic) BOOL hasNWifiGood;
@property (nonatomic) unsigned int nWifiGood;
@property (nonatomic) BOOL hasNCellularNotReady;
@property (nonatomic) unsigned int nCellularNotReady;
@property (nonatomic) BOOL hasNCelluarBadSignal;
@property (nonatomic) unsigned int nCelluarBadSignal;
@property (nonatomic) BOOL hasNCelluarBadRSRP;
@property (nonatomic) unsigned int nCelluarBadRSRP;
@property (nonatomic) BOOL hasNCelluarBadLQM;
@property (nonatomic) unsigned int nCelluarBadLQM;
@property (nonatomic) BOOL hasNCelluarBadEcio;
@property (nonatomic) unsigned int nCelluarBadEcio;
@property (nonatomic) BOOL hasNHandoverPerformed;
@property (nonatomic) unsigned int nHandoverPerformed;
@property (nonatomic) BOOL hasNHandoverNotPerformed;
@property (nonatomic) unsigned int nHandoverNotPerformed;
@property (nonatomic) BOOL hasNHandoverUnknown;
@property (nonatomic) unsigned int nHandoverUnknown;
@property (nonatomic) BOOL hasNStatusUpdateDelayBin1;
@property (nonatomic) unsigned int nStatusUpdateDelayBin1;
@property (nonatomic) BOOL hasNStatusUpdateDelayBin2;
@property (nonatomic) unsigned int nStatusUpdateDelayBin2;
@property (nonatomic) BOOL hasNStatusUpdateDelayBin3;
@property (nonatomic) unsigned int nStatusUpdateDelayBin3;
@property (nonatomic) BOOL hasNStatusUpdateDelayBin4;
@property (nonatomic) unsigned int nStatusUpdateDelayBin4;
@property (nonatomic) BOOL hasNStatusUpdateDelayBin5;
@property (nonatomic) unsigned int nStatusUpdateDelayBin5;
@property (nonatomic) BOOL hasNStatusUpdateDelayBin6;
@property (nonatomic) unsigned int nStatusUpdateDelayBin6;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
