@interface AWDIDSRegistrationAuthenticationParametersReceived : PBCodable <NSCopying> {
    struct { unsigned char timeIntervalSinceRequest : 1; unsigned char timestamp : 1; unsigned char error : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasError;
@property (nonatomic) int error;
@property (nonatomic) BOOL hasTimeIntervalSinceRequest;
@property (nonatomic) unsigned long long timeIntervalSinceRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
