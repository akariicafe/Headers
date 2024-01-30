@class NSString;

@interface AWDIDSLocalDeliveryMessageDelivered : PBCodable <NSCopying> {
    struct { unsigned char deliveryError : 1; unsigned char isToDefaultPairedDevice : 1; unsigned char linkType : 1; unsigned char messageSize : 1; unsigned char priority : 1; unsigned char rTT : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) BOOL hasIsToDefaultPairedDevice;
@property (nonatomic) unsigned long long isToDefaultPairedDevice;
@property (nonatomic) BOOL hasMessageSize;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) BOOL hasDeliveryError;
@property (nonatomic) unsigned long long deliveryError;
@property (nonatomic) BOOL hasRTT;
@property (nonatomic) unsigned long long rTT;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) unsigned long long linkType;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned long long priority;

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
