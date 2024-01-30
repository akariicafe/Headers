@class NSData, NSPersonNameComponents;

@interface BRFieldUserIdentity : PBCodable <NSCopying>

@property (retain, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, nonatomic) BOOL hasSerializedNameComponents;
@property (retain, nonatomic) NSData *serializedNameComponents;

+ (id)unknownPersonNameComponents;

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
- (id)initWithCKUserIdentity:(id)a0;
- (id)nameComponentsAcceptUnknownUser:(BOOL)a0;

@end
