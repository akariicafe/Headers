@interface ATXPBDigestTimeline : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char digestRemovedTimestamp : 1; unsigned char firstCollapsedViewTimestamp : 1; unsigned char firstScheduledViewTimestamp : 1; unsigned char firstUpcomingViewTimestamp : 1; } _has;
}

@property (nonatomic) BOOL hasFirstUpcomingViewTimestamp;
@property (nonatomic) double firstUpcomingViewTimestamp;
@property (nonatomic) BOOL hasFirstCollapsedViewTimestamp;
@property (nonatomic) double firstCollapsedViewTimestamp;
@property (nonatomic) BOOL hasFirstScheduledViewTimestamp;
@property (nonatomic) double firstScheduledViewTimestamp;
@property (nonatomic) BOOL hasDigestRemovedTimestamp;
@property (nonatomic) double digestRemovedTimestamp;

- (id)initFromJSON:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
