@interface SGM2BirthdayExtractionWithSupervision : PBCodable <NSCopying> {
    struct { unsigned char modelVersion : 1; unsigned char offset : 1; unsigned char dateIsCorrect : 1; unsigned char didRegexTrigger : 1; unsigned char didResponseKitTrigger : 1; unsigned char isFromCongratulation : 1; } _has;
}

@property (nonatomic) BOOL hasDateIsCorrect;
@property (nonatomic) BOOL dateIsCorrect;
@property (nonatomic) BOOL hasIsFromCongratulation;
@property (nonatomic) BOOL isFromCongratulation;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) unsigned int modelVersion;
@property (nonatomic) BOOL hasDidRegexTrigger;
@property (nonatomic) BOOL didRegexTrigger;
@property (nonatomic) BOOL hasOffset;
@property (nonatomic) int offset;
@property (nonatomic) BOOL hasDidResponseKitTrigger;
@property (nonatomic) BOOL didResponseKitTrigger;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)offsetAsString:(int)a0;
- (int)StringAsOffset:(id)a0;

@end
