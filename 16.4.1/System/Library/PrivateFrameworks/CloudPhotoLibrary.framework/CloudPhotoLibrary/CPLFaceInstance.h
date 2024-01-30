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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)clearState;
- (id)pointerDescription;
- (void)_setFaceStateBit:(unsigned int)a0 fromBoolValue:(BOOL)a1;
- (BOOL)_isFaceStateBitSet:(unsigned int)a0;
- (void)addRejectedPersonIdentifiers:(id)a0;
- (void)clearRejectedPersonIdentifiers;
- (id)rejectedPersonIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)rejectedPersonIdentifiersCount;

@end
