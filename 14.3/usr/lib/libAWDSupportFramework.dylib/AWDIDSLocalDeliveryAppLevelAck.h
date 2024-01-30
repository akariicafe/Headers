@class NSString;

@interface AWDIDSLocalDeliveryAppLevelAck : PBCodable <NSCopying> {
    struct { unsigned char isToDefaultPairedDevice : 1; unsigned char linkType : 1; unsigned char priority : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) BOOL hasIsToDefaultPairedDevice;
@property (nonatomic) unsigned long long isToDefaultPairedDevice;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) unsigned long long linkType;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned long long priority;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
