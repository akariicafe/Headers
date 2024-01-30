@class NSString;

@interface SGM2EventBannerConfirmed : PBCodable <NSCopying> {
    struct { unsigned char app : 1; unsigned char category : 1; unsigned char dateAdj : 1; unsigned char duraAdj : 1; unsigned char extracted : 1; unsigned char state : 1; unsigned char titleAdj : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasApp;
@property (nonatomic) int app;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) int category;
@property (nonatomic) BOOL hasExtracted;
@property (nonatomic) int extracted;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int state;
@property (nonatomic) BOOL hasTitleAdj;
@property (nonatomic) int titleAdj;
@property (nonatomic) BOOL hasDateAdj;
@property (nonatomic) int dateAdj;
@property (nonatomic) BOOL hasDuraAdj;
@property (nonatomic) int duraAdj;

- (int)StringAsState:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)appAsString:(int)a0;
- (int)StringAsApp:(id)a0;
- (id)extractedAsString:(int)a0;
- (int)StringAsExtracted:(id)a0;
- (id)titleAdjAsString:(int)a0;
- (int)StringAsTitleAdj:(id)a0;
- (id)dateAdjAsString:(int)a0;
- (int)StringAsDateAdj:(id)a0;
- (id)duraAdjAsString:(int)a0;
- (int)StringAsDuraAdj:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)categoryAsString:(int)a0;
- (int)StringAsCategory:(id)a0;
- (unsigned long long)hash;
- (id)stateAsString:(int)a0;
- (id)dictionaryRepresentation;

@end
