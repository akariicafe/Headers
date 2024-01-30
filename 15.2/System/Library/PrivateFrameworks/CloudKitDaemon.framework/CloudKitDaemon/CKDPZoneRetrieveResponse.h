@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *zoneSummarys;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (retain, nonatomic) NSMutableArray *anonymousZoneInfos;

+ (Class)zoneSummaryType;
+ (Class)anonymousZoneInfoType;

- (void)clearAnonymousZoneInfos;
- (void)clearZoneSummarys;
- (void)addZoneSummary:(id)a0;
- (void)addAnonymousZoneInfo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)anonymousZoneInfoAtIndex:(unsigned long long)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)anonymousZoneInfosCount;
- (id)dictionaryRepresentation;
- (id)zoneSummaryAtIndex:(unsigned long long)a0;
- (unsigned long long)zoneSummarysCount;

@end
