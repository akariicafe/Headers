@class NSString;

@interface AWDIDSWebTunnelRequestCompleted : PBCodable <NSCopying> {
    struct { unsigned char requestSize : 1; unsigned char timeTaken : 1; unsigned char timestamp : 1; unsigned char deliveryType : 1; unsigned char tunnelError : 1; unsigned char reversePushAttempted : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasServiceIdentifier;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) BOOL hasTimeTaken;
@property (nonatomic) unsigned long long timeTaken;
@property (nonatomic) BOOL hasDeliveryType;
@property (nonatomic) int deliveryType;
@property (nonatomic) BOOL hasTunnelError;
@property (nonatomic) int tunnelError;
@property (nonatomic) BOOL hasRequestSize;
@property (nonatomic) unsigned long long requestSize;
@property (nonatomic) BOOL hasReversePushAttempted;
@property (nonatomic) BOOL reversePushAttempted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
