@class NSData;

@interface AWDNFCVASTransactionExceptionEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char commandType : 1; unsigned char swStatus : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCommandType;
@property (nonatomic) unsigned int commandType;
@property (nonatomic) BOOL hasSwStatus;
@property (nonatomic) unsigned int swStatus;
@property (readonly, nonatomic) BOOL hasUuidReference;
@property (retain, nonatomic) NSData *uuidReference;

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
