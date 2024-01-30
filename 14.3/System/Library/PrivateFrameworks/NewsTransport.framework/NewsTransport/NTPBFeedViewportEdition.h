@class NTPBDate;

@interface NTPBFeedViewportEdition : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasKeyDate;
@property (retain, nonatomic) NTPBDate *keyDate;
@property (readonly, nonatomic) BOOL hasFeedDateRangeStart;
@property (retain, nonatomic) NTPBDate *feedDateRangeStart;
@property (readonly, nonatomic) BOOL hasFeedDateRangeEnd;
@property (retain, nonatomic) NTPBDate *feedDateRangeEnd;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
