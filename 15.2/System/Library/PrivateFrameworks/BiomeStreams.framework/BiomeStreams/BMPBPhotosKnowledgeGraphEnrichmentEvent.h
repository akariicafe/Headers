@class NSString, NSMutableArray;

@interface BMPBPhotosKnowledgeGraphEnrichmentEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (retain, nonatomic) NSMutableArray *topics;
@property (retain, nonatomic) NSMutableArray *entities;
@property (retain, nonatomic) NSMutableArray *locations;
@property (readonly, nonatomic) BOOL hasUniqueId;
@property (retain, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) BOOL hasContentProtection;
@property (retain, nonatomic) NSString *contentProtection;

+ (Class)topicsType;
+ (Class)entitiesType;
+ (Class)locationsType;

- (unsigned long long)locationsCount;
- (void)clearEntities;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (unsigned long long)topicsCount;
- (void)addTopics:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)topicsAtIndex:(unsigned long long)a0;
- (unsigned long long)entitiesCount;
- (void)addEntities:(id)a0;
- (id)entitiesAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)clearTopics;
- (void)addLocations:(id)a0;
- (unsigned long long)hash;
- (void)clearLocations;
- (id)dictionaryRepresentation;
- (id)locationsAtIndex:(unsigned long long)a0;

@end
