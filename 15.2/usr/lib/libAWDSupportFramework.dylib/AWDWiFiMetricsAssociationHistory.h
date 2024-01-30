@class NSMutableArray;

@interface AWDWiFiMetricsAssociationHistory : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *associationEvents;

+ (Class)associationEventsType;

- (BOOL)readFrom:(id)a0;
- (void)addAssociationEvents:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)associationEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)associationEventsCount;
- (unsigned long long)hash;
- (void)dealloc;
- (void)clearAssociationEvents;
- (id)dictionaryRepresentation;

@end
