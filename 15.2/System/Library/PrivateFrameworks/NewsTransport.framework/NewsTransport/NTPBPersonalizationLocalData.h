@class NSData, NSMutableArray, NSString;

@interface NTPBPersonalizationLocalData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *openChangeGroupDeltas;
@property (retain, nonatomic) NSMutableArray *closedChangeGroups;
@property (readonly, nonatomic) BOOL hasRemoteRecordData;
@property (retain, nonatomic) NSData *remoteRecordData;
@property (readonly, nonatomic) BOOL hasCurrentInstanceIdentifier;
@property (retain, nonatomic) NSString *currentInstanceIdentifier;
@property (retain, nonatomic) NSMutableArray *aggregates;

+ (Class)aggregatesType;
+ (Class)openChangeGroupDeltasType;
+ (Class)closedChangeGroupsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)addAggregates:(id)a0;
- (void)clearAggregates;
- (unsigned long long)aggregatesCount;
- (id)aggregatesAtIndex:(unsigned long long)a0;
- (void)addOpenChangeGroupDeltas:(id)a0;
- (void)addClosedChangeGroups:(id)a0;
- (void)clearOpenChangeGroupDeltas;
- (unsigned long long)openChangeGroupDeltasCount;
- (id)openChangeGroupDeltasAtIndex:(unsigned long long)a0;
- (void)clearClosedChangeGroups;
- (unsigned long long)closedChangeGroupsCount;
- (id)closedChangeGroupsAtIndex:(unsigned long long)a0;

@end
