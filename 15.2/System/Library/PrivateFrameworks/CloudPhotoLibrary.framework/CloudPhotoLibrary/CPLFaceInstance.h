@class NSString, NSMutableArray;

@interface CPLFaceInstance : PBCodable <NSCopying> {
    struct { unsigned char centerX : 1; unsigned char centerY : 1; unsigned char size : 1; unsigned char faceState : 1; unsigned char nameSource : 1; } _has;
}

@property (readonly, nonatomic, getter=isNoneState) BOOL noneState;
@property (nonatomic, getter=isKeyFace) BOOL keyFace;
@property (nonatomic, getter=isManual) BOOL manual;
@property (readonly, nonatomic) BOOL hasPersonIdentifier;
@property (retain, nonatomic) NSString *personIdentifier;
@property (nonatomic) BOOL hasCenterX;
@property (nonatomic) double centerX;
@property (nonatomic) BOOL hasCenterY;
@property (nonatomic) double centerY;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) double size;
@property (nonatomic) BOOL hasFaceState;
@property (nonatomic) unsigned int faceState;
@property (retain, nonatomic) NSMutableArray *rejectedPersonIdentifiers;
@property (nonatomic) BOOL hasNameSource;
@property (nonatomic) unsigned int nameSource;

+ (Class)rejectedPersonIdentifiersType;

- (long long)compare:(id)a0;
- (void)clearState;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)pointerDescription;
- (id)dictionaryRepresentation;
- (void)_setFaceStateBit:(unsigned int)a0 fromBoolValue:(BOOL)a1;
- (BOOL)_isFaceStateBitSet:(unsigned int)a0;
- (void)clearRejectedPersonIdentifiers;
- (void)addRejectedPersonIdentifiers:(id)a0;
- (unsigned long long)rejectedPersonIdentifiersCount;
- (id)rejectedPersonIdentifiersAtIndex:(unsigned long long)a0;

@end
