@interface AWDBarcodeSupportCodeDetectedEvent : PBCodable <NSCopying> {
    struct { unsigned char detectionTimeMs : 1; unsigned char timestamp : 1; unsigned char appLinkPreferredOpenStrategy : 1; unsigned char barcodeDataType : 1; unsigned char barcodeSourceType : 1; unsigned char barcodeURLType : 1; unsigned char clientType : 1; unsigned char invalidBarcodeDataType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasClientType;
@property (nonatomic) int clientType;
@property (nonatomic) BOOL hasBarcodeDataType;
@property (nonatomic) int barcodeDataType;
@property (nonatomic) BOOL hasDetectionTimeMs;
@property (nonatomic) unsigned long long detectionTimeMs;
@property (nonatomic) BOOL hasInvalidBarcodeDataType;
@property (nonatomic) int invalidBarcodeDataType;
@property (nonatomic) BOOL hasBarcodeURLType;
@property (nonatomic) int barcodeURLType;
@property (nonatomic) BOOL hasAppLinkPreferredOpenStrategy;
@property (nonatomic) int appLinkPreferredOpenStrategy;
@property (nonatomic) BOOL hasBarcodeSourceType;
@property (nonatomic) int barcodeSourceType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)clientTypeAsString:(int)a0;
- (int)StringAsClientType:(id)a0;
- (id)barcodeDataTypeAsString:(int)a0;
- (int)StringAsBarcodeDataType:(id)a0;
- (id)barcodeURLTypeAsString:(int)a0;
- (int)StringAsBarcodeURLType:(id)a0;
- (id)barcodeSourceTypeAsString:(int)a0;
- (int)StringAsBarcodeSourceType:(id)a0;
- (id)invalidBarcodeDataTypeAsString:(int)a0;
- (int)StringAsInvalidBarcodeDataType:(id)a0;
- (id)appLinkPreferredOpenStrategyAsString:(int)a0;
- (int)StringAsAppLinkPreferredOpenStrategy:(id)a0;

@end
