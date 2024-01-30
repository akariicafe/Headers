@class NSMutableArray, HDCodableSyncAnchorRangeMap;

@interface HDCloudSyncCodableSequence : PBCodable <NSCopying> {
    struct { unsigned char changeIndex : 1; unsigned char childRecordCount : 1; unsigned char epoch : 1; unsigned char protocolVersion : 1; unsigned char slot : 1; unsigned char active : 1; } _has;
}

@property (nonatomic) BOOL hasSlot;
@property (nonatomic) int slot;
@property (nonatomic) BOOL hasActive;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL hasEpoch;
@property (nonatomic) long long epoch;
@property (retain, nonatomic) NSMutableArray *includedStoreIdentifiers;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) long long protocolVersion;
@property (readonly, nonatomic) BOOL hasAnchorMap;
@property (retain, nonatomic) HDCodableSyncAnchorRangeMap *anchorMap;
@property (readonly, nonatomic) BOOL hasFrozenAnchorMap;
@property (retain, nonatomic) HDCodableSyncAnchorRangeMap *frozenAnchorMap;
@property (nonatomic) BOOL hasChangeIndex;
@property (nonatomic) long long changeIndex;
@property (nonatomic) BOOL hasChildRecordCount;
@property (nonatomic) long long childRecordCount;
@property (retain, nonatomic) NSMutableArray *unfrozenChangeRecordNames;

+ (Class)includedStoreIdentifiersType;
+ (Class)unfrozenChangeRecordNamesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsSlot:(id)a0;
- (id)slotAsString:(int)a0;
- (void)addIncludedStoreIdentifiers:(id)a0;
- (void)addUnfrozenChangeRecordNames:(id)a0;
- (void)clearIncludedStoreIdentifiers;
- (void)clearUnfrozenChangeRecordNames;
- (id)includedStoreIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)includedStoreIdentifiersCount;
- (id)unfrozenChangeRecordNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)unfrozenChangeRecordNamesCount;

@end
