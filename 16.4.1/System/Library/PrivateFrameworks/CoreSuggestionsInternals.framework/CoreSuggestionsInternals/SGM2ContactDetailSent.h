@class NSString;

@interface SGM2ContactDetailSent : PBCodable <NSCopying> {
    struct { unsigned char detail : 1; unsigned char foundIn : 1; unsigned char source : 1; unsigned char tokens : 1; unsigned char hasName : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) int source;
@property (nonatomic) BOOL hasDetail;
@property (nonatomic) int detail;
@property (nonatomic) BOOL hasFoundIn;
@property (nonatomic) int foundIn;
@property (nonatomic) BOOL hasHasName;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasTokens;
@property (nonatomic) int tokens;

- (int)StringAsSource:(id)a0;
- (id)sourceAsString:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsDetail:(id)a0;
- (int)StringAsFoundIn:(id)a0;
- (int)StringAsTokens:(id)a0;
- (id)detailAsString:(int)a0;
- (id)tokensAsString:(int)a0;
- (id)foundInAsString:(int)a0;

@end
