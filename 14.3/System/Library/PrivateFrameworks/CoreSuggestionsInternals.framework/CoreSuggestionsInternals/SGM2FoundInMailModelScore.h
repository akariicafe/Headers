@class NSString;

@interface SGM2FoundInMailModelScore : PBCodable <NSCopying> {
    struct { unsigned char contactDetail : 1; unsigned char mode : 1; unsigned char model : 1; unsigned char supervision : 1; unsigned char correct : 1; unsigned char result : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasModel;
@property (nonatomic) int model;
@property (nonatomic) BOOL hasContactDetail;
@property (nonatomic) int contactDetail;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) BOOL result;
@property (nonatomic) BOOL hasCorrect;
@property (nonatomic) BOOL correct;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) int mode;
@property (nonatomic) BOOL hasSupervision;
@property (nonatomic) int supervision;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (id)modeAsString:(int)a0;
- (void)copyTo:(id)a0;
- (int)StringAsMode:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)modelAsString:(int)a0;
- (int)StringAsModel:(id)a0;
- (id)supervisionAsString:(int)a0;
- (int)StringAsSupervision:(id)a0;
- (id)contactDetailAsString:(int)a0;
- (int)StringAsContactDetail:(id)a0;

@end
