@class NSString;

@interface SGM2SuggestedContactDetailShown : PBCodable <NSCopying> {
    struct { unsigned char app : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasApp;
@property (nonatomic) int app;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)appAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (int)StringAsApp:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
