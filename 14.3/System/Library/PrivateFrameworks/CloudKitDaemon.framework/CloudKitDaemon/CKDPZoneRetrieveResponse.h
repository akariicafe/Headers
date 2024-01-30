@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *zoneSummarys;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;

+ (Class)zoneSummaryType;

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
- (void)addZoneSummary:(id)a0;
- (unsigned long long)zoneSummarysCount;
- (void)clearZoneSummarys;
- (id)zoneSummaryAtIndex:(unsigned long long)a0;

@end
