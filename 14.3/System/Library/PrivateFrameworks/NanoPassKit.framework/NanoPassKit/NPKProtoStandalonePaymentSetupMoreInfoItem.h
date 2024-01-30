@class NSString, NSData;

@interface NPKProtoStandalonePaymentSetupMoreInfoItem : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasBody;
@property (retain, nonatomic) NSString *body;
@property (readonly, nonatomic) BOOL hasLinkText;
@property (retain, nonatomic) NSString *linkText;
@property (readonly, nonatomic) BOOL hasLinkURL;
@property (retain, nonatomic) NSString *linkURL;
@property (readonly, nonatomic) BOOL hasImageURL;
@property (retain, nonatomic) NSString *imageURL;
@property (readonly, nonatomic) BOOL hasImageData;
@property (retain, nonatomic) NSData *imageData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
