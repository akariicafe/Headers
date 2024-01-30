@interface AWDNFCPTOperation : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char awdErrorCode : 1; unsigned char errorCode : 1; unsigned char errorStep : 1; unsigned char operationType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) unsigned int operationType;
@property (nonatomic) BOOL hasErrorStep;
@property (nonatomic) unsigned int errorStep;
@property (nonatomic) BOOL hasAwdErrorCode;
@property (nonatomic) unsigned int awdErrorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) unsigned int errorCode;

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
