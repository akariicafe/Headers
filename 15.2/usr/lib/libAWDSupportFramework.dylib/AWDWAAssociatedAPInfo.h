@class NSString;

@interface AWDWAAssociatedAPInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasManufacturerElement;
@property (retain, nonatomic) NSString *manufacturerElement;
@property (readonly, nonatomic) BOOL hasModelName;
@property (retain, nonatomic) NSString *modelName;
@property (readonly, nonatomic) BOOL hasModelNumber;
@property (retain, nonatomic) NSString *modelNumber;
@property (readonly, nonatomic) BOOL hasDeviceNameElement;
@property (retain, nonatomic) NSString *deviceNameElement;
@property (readonly, nonatomic) BOOL hasDeviceNameData;
@property (retain, nonatomic) NSString *deviceNameData;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
