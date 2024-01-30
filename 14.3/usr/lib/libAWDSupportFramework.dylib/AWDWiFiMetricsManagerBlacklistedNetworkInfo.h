@class NSString, NSMutableArray;

@interface AWDWiFiMetricsManagerBlacklistedNetworkInfo : PBCodable <NSCopying> {
    struct { unsigned char networkFlags : 1; unsigned char reserverdInfo : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSsidHash;
@property (retain, nonatomic) NSString *ssidHash;
@property (nonatomic) BOOL hasNetworkFlags;
@property (nonatomic) unsigned int networkFlags;
@property (nonatomic) BOOL hasReserverdInfo;
@property (nonatomic) unsigned int reserverdInfo;
@property (retain, nonatomic) NSMutableArray *blacklistingRecords;

+ (Class)blacklistingRecordType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addBlacklistingRecord:(id)a0;
- (unsigned long long)blacklistingRecordsCount;
- (void)clearBlacklistingRecords;
- (id)blacklistingRecordAtIndex:(unsigned long long)a0;

@end
