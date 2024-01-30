@class NSString, HDCodableEntityIdentifier, NSNumber, NSMutableArray;

@interface HDCodableNanoSyncChange : PBCodable <HDSyncChange, HDNanoSyncDescription, NSCopying> {
    struct { unsigned char endAnchor : 1; unsigned char sequence : 1; unsigned char startAnchor : 1; unsigned char objectType : 1; unsigned char complete : 1; unsigned char speculative : 1; } _has;
}

@property (readonly, nonatomic, getter=isSpeculative) BOOL speculative;
@property (readonly, nonatomic) struct HDSyncAnchorRange { long long x0; long long x1; } syncAnchorRange;
@property (readonly, nonatomic) NSNumber *sequenceNumber;
@property (readonly, nonatomic) BOOL done;
@property (readonly, nonatomic) long long encodedByteCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasObjectType;
@property (nonatomic) int objectType;
@property (nonatomic) BOOL hasStartAnchor;
@property (nonatomic) long long startAnchor;
@property (nonatomic) BOOL hasEndAnchor;
@property (nonatomic) long long endAnchor;
@property (retain, nonatomic) NSMutableArray *objectDatas;
@property (retain, nonatomic) NSMutableArray *requiredAnchors;
@property (nonatomic) BOOL hasSpeculative;
@property (nonatomic) BOOL speculative;
@property (nonatomic) BOOL hasSequence;
@property (nonatomic) long long sequence;
@property (nonatomic) BOOL hasComplete;
@property (nonatomic) BOOL complete;
@property (readonly, nonatomic) BOOL hasEntityIdentifier;
@property (retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier;

+ (id)changeWithNanoSyncEntityClass:(Class)a0;
+ (Class)objectDataType;
+ (Class)requiredAnchorsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)objectTypeAsString:(int)a0;
- (int)StringAsObjectType:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)syncEntityIdentifier;
- (id)nanoSyncDescription;
- (Class)syncEntityClassForProfile:(id)a0;
- (id)speculativeCopy;
- (void)addObjectData:(id)a0;
- (void)addRequiredAnchors:(id)a0;
- (unsigned long long)objectDatasCount;
- (void)clearObjectDatas;
- (id)objectDataAtIndex:(unsigned long long)a0;
- (unsigned long long)requiredAnchorsCount;
- (void)clearRequiredAnchors;
- (id)requiredAnchorsAtIndex:(unsigned long long)a0;
- (void)setObjects:(id)a0 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a1 requiredAnchorMap:(id)a2;
- (void)setSequenceNumber:(long long)a0 done:(BOOL)a1;
- (id)requiredAnchorMapWithProfile:(id)a0 error:(id *)a1;
- (id)decodedObjectsForProfile:(id)a0 error:(id *)a1;

@end
