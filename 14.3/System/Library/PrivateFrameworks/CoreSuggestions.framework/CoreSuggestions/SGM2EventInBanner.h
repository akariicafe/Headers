@class NSString;

@interface SGM2EventInBanner : PBCodable <NSCopying> {
    struct { unsigned char app : 1; unsigned char category : 1; unsigned char extracted : 1; unsigned char state : 1; } _has;
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

- (id)stateAsString:(int)a0;
- (int)StringAsState:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)extractedAsString:(int)a0;
- (int)StringAsExtracted:(id)a0;
- (id)appAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)categoryAsString:(int)a0;
- (int)StringAsCategory:(id)a0;
- (unsigned long long)hash;
- (int)StringAsApp:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
