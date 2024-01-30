@class MIPMultiverseIdentifier;

@interface _MPUProtoBufUserActivityContainerItem : PBCodable <NSCopying> {
    struct { unsigned char containerItemType : 1; } _has;
}

@property (nonatomic) BOOL hasContainerItemType;
@property (nonatomic) int containerItemType;
@property (readonly, nonatomic) BOOL hasSelectedMultiverseIdentifier;
@property (retain, nonatomic) MIPMultiverseIdentifier *selectedMultiverseIdentifier;
@property (readonly, nonatomic) BOOL hasVisualReferenceMultiverseIdentifier;
@property (retain, nonatomic) MIPMultiverseIdentifier *visualReferenceMultiverseIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
