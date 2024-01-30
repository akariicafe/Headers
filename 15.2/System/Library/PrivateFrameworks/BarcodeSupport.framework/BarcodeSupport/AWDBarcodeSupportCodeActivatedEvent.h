@interface AWDBarcodeSupportCodeActivatedEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char appLinkActivationOpenStrategy : 1; unsigned char barcodeDataType : 1; unsigned char barcodeSourceType : 1; unsigned char barcodeURLType : 1; unsigned char clientType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasClientType;
@property (nonatomic) int clientType;
@property (nonatomic) BOOL hasBarcodeDataType;
@property (nonatomic) int barcodeDataType;
@property (nonatomic) BOOL hasBarcodeURLType;
@property (nonatomic) int barcodeURLType;
@property (nonatomic) BOOL hasAppLinkActivationOpenStrategy;
@property (nonatomic) int appLinkActivationOpenStrategy;
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
- (id)appLinkActivationOpenStrategyAsString:(int)a0;
- (int)StringAsAppLinkActivationOpenStrategy:(id)a0;
- (id)barcodeSourceTypeAsString:(int)a0;
- (int)StringAsBarcodeSourceType:(id)a0;

@end
