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
