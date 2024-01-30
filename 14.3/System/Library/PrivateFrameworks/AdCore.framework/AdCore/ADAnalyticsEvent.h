@interface ADAnalyticsEvent : PBCodable <NSCopying>

@property (nonatomic) int event;
@property (nonatomic) double timestamp;

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)eventAsString:(int)a0;
- (int)StringAsEvent:(id)a0;

@end
