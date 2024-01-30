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
