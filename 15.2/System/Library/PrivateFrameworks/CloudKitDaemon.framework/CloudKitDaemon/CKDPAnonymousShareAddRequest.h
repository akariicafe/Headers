@class NSString, NSData;

@interface CKDPAnonymousShareAddRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasAnonymousShareTupleHash;
@property (retain, nonatomic) NSString *anonymousShareTupleHash;
@property (readonly, nonatomic) BOOL hasEncryptedShareTuple;
@property (retain, nonatomic) NSData *encryptedShareTuple;

+ (id)options;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
