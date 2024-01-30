@class NSMutableArray;

@interface NTPBPrivateDataControllerSyncState : PBCodable <NSCopying> {
    struct { unsigned char version : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *zoneStates;
@property (retain, nonatomic) NSMutableArray *recordStates;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned long long version;

+ (Class)zoneStatesType;
+ (Class)recordStatesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addZoneStates:(id)a0;
- (void)addRecordStates:(id)a0;
- (void)clearZoneStates;
- (unsigned long long)zoneStatesCount;
- (id)zoneStatesAtIndex:(unsigned long long)a0;
- (void)clearRecordStates;
- (unsigned long long)recordStatesCount;
- (id)recordStatesAtIndex:(unsigned long long)a0;

@end
