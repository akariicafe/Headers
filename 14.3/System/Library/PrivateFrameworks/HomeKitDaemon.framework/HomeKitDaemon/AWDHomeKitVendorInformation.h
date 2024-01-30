@class NSString;

@interface AWDHomeKitVendorInformation : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasManufacturer;
@property (retain, nonatomic) NSString *manufacturer;
@property (readonly, nonatomic) BOOL hasModel;
@property (retain, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL hasFirmwareVersion;
@property (retain, nonatomic) NSString *firmwareVersion;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL hasProductData;
@property (retain, nonatomic) NSString *productData;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;

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
