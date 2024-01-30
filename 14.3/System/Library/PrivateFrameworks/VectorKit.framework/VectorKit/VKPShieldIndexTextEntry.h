@class NSString, NSMutableArray;

@interface VKPShieldIndexTextEntry : PBCodable <NSCopying> {
    struct { unsigned char shieldType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArtworkIdentifier;
@property (retain, nonatomic) NSString *artworkIdentifier;
@property (nonatomic) BOOL hasShieldType;
@property (nonatomic) int shieldType;
@property (retain, nonatomic) NSMutableArray *shieldTexts;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addShieldText:(id)a0;
- (unsigned long long)shieldTextsCount;
- (void)clearShieldTexts;
- (id)shieldTextAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
