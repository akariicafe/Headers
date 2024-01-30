@class NSMutableArray;

@interface AWDHomeKitCloudSync : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char dataSyncState : 1; unsigned char fetchCount : 1; unsigned char homeDataMegabytesFetched : 1; unsigned char homeDataMegabytesPushed : 1; unsigned char homeManagerFetchCount : 1; unsigned char homeManagerUploadCount : 1; unsigned char homeZoneFetchCount : 1; unsigned char homeZoneUploadCount : 1; unsigned char legacyHomeDataMegabytesFetched : 1; unsigned char legacyHomeDataMegabytesPushed : 1; unsigned char pushCount : 1; unsigned char uploadCount : 1; unsigned char uploadErrorCount : 1; unsigned char hasDecryptionFailed : 1; unsigned char lastDecryptionFailed : 1; unsigned char uploadMaximumDelayReached : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasPushCount;
@property (nonatomic) unsigned int pushCount;
@property (nonatomic) BOOL hasFetchCount;
@property (nonatomic) unsigned int fetchCount;
@property (nonatomic) BOOL hasUploadCount;
@property (nonatomic) unsigned int uploadCount;
@property (nonatomic) BOOL hasUploadErrorCount;
@property (nonatomic) unsigned int uploadErrorCount;
@property (retain, nonatomic) NSMutableArray *topReasons;
@property (retain, nonatomic) NSMutableArray *topErrors;
@property (nonatomic) BOOL hasUploadMaximumDelayReached;
@property (nonatomic) BOOL uploadMaximumDelayReached;
@property (nonatomic) BOOL hasHasDecryptionFailed;
@property (nonatomic) BOOL hasDecryptionFailed;
@property (nonatomic) BOOL hasLastDecryptionFailed;
@property (nonatomic) BOOL lastDecryptionFailed;
@property (nonatomic) BOOL hasDataSyncState;
@property (nonatomic) int dataSyncState;
@property (nonatomic) BOOL hasHomeManagerFetchCount;
@property (nonatomic) unsigned int homeManagerFetchCount;
@property (nonatomic) BOOL hasHomeZoneFetchCount;
@property (nonatomic) unsigned int homeZoneFetchCount;
@property (nonatomic) BOOL hasHomeManagerUploadCount;
@property (nonatomic) unsigned int homeManagerUploadCount;
@property (nonatomic) BOOL hasHomeZoneUploadCount;
@property (nonatomic) unsigned int homeZoneUploadCount;
@property (nonatomic) BOOL hasHomeDataMegabytesFetched;
@property (nonatomic) unsigned int homeDataMegabytesFetched;
@property (nonatomic) BOOL hasHomeDataMegabytesPushed;
@property (nonatomic) unsigned int homeDataMegabytesPushed;
@property (nonatomic) BOOL hasLegacyHomeDataMegabytesFetched;
@property (nonatomic) unsigned int legacyHomeDataMegabytesFetched;
@property (nonatomic) BOOL hasLegacyHomeDataMegabytesPushed;
@property (nonatomic) unsigned int legacyHomeDataMegabytesPushed;

+ (Class)topErrorsType;
+ (Class)topReasonsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)clearTopReasons;
- (int)StringAsDataSyncState:(id)a0;
- (unsigned long long)topReasonsCount;
- (void)addTopErrors:(id)a0;
- (void)addTopReasons:(id)a0;
- (void)clearTopErrors;
- (id)dataSyncStateAsString:(int)a0;
- (id)topErrorsAtIndex:(unsigned long long)a0;
- (unsigned long long)topErrorsCount;
- (id)topReasonsAtIndex:(unsigned long long)a0;

@end
