@class NSString, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowPickerItem : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *products;

+ (Class)productsType;

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
- (void)addProducts:(id)a0;
- (unsigned long long)productsCount;
- (void)clearProducts;
- (id)productsAtIndex:(unsigned long long)a0;

@end
