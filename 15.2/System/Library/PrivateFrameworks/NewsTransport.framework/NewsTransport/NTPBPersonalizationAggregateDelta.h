@class NSString;

@interface NTPBPersonalizationAggregateDelta : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _events;
    struct { unsigned char defaultClicks : 1; unsigned char defaultImpressions : 1; unsigned char groupBias : 1; unsigned char impressionBias : 1; unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFeatureKey;
@property (retain, nonatomic) NSString *featureKey;
@property (nonatomic) BOOL hasDefaultClicks;
@property (nonatomic) double defaultClicks;
@property (nonatomic) BOOL hasDefaultImpressions;
@property (nonatomic) double defaultImpressions;
@property (readonly, nonatomic) unsigned long long eventsCount;
@property (readonly, nonatomic) unsigned int *events;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasImpressionBias;
@property (nonatomic) double impressionBias;
@property (nonatomic) BOOL hasGroupBias;
@property (nonatomic) double groupBias;

- (void)addEvents:(unsigned int)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)clearEvents;
- (id)dictionaryRepresentation;
- (void)setEvents:(unsigned int *)a0 count:(unsigned long long)a1;

@end
