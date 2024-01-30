@class NSData, NSMutableArray, NSString;

@interface NTPBPersonalizationLocalData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *openChangeGroupDeltas;
@property (retain, nonatomic) NSMutableArray *closedChangeGroups;
@property (readonly, nonatomic) BOOL hasRemoteRecordData;
@property (retain, nonatomic) NSData *remoteRecordData;
@property (readonly, nonatomic) BOOL hasCurrentInstanceIdentifier;
@property (retain, nonatomic) NSString *currentInstanceIdentifier;
@property (retain, nonatomic) NSMutableArray *aggregates;

+ (Class)openChangeGroupDeltasType;
+ (Class)closedChangeGroupsType;
+ (Class)aggregatesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (void)addAggregates:(id)a0;
- (void)clearAggregates;
- (unsigned long long)aggregatesCount;
- (id)aggregatesAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addOpenChangeGroupDeltas:(id)a0;
- (void)addClosedChangeGroups:(id)a0;
- (void)clearOpenChangeGroupDeltas;
- (unsigned long long)openChangeGroupDeltasCount;
- (id)openChangeGroupDeltasAtIndex:(unsigned long long)a0;
- (void)clearClosedChangeGroups;
- (unsigned long long)closedChangeGroupsCount;
- (id)closedChangeGroupsAtIndex:(unsigned long long)a0;

@end
