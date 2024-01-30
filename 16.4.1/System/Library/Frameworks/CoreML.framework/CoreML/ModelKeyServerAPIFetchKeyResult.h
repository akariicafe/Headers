@class NSString, ModelKeyServerAPISignedKey, ModelKeyServerAPIRawKey;

@interface ModelKeyServerAPIFetchKeyResult : PBCodable <NSCopying> {
    struct { unsigned char key : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKeyId;
@property (retain, nonatomic) NSString *keyId;
@property (readonly, nonatomic) BOOL hasModelName;
@property (retain, nonatomic) NSString *modelName;
@property (readonly, nonatomic) BOOL hasTeamId;
@property (retain, nonatomic) NSString *teamId;
@property (readonly, nonatomic) BOOL hasSignedKey;
@property (retain, nonatomic) ModelKeyServerAPISignedKey *signedKey;
@property (readonly, nonatomic) BOOL hasRawKey;
@property (retain, nonatomic) ModelKeyServerAPIRawKey *rawKey;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) int key;

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
- (int)StringAsKey:(id)a0;
- (id)keyAsString:(int)a0;
- (void)clearOneofValuesForKey;

@end
