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

- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initFromJSON:(id)a0;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
