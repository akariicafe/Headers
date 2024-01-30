@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *zoneSummarys;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (retain, nonatomic) NSMutableArray *anonymousZoneInfos;

+ (Class)zoneSummaryType;
+ (Class)anonymousZoneInfoType;

- (unsigned long long)anonymousZoneInfosCount;
- (id)zoneSummaryAtIndex:(unsigned long long)a0;
- (void)addAnonymousZoneInfo:(id)a0;
- (void)clearZoneSummarys;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearAnonymousZoneInfos;
- (BOOL)isEqual:(id)a0;
- (void)addZoneSummary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)zoneSummarysCount;
- (void).cxx_destruct;
- (id)anonymousZoneInfoAtIndex:(unsigned long long)a0;

@end
