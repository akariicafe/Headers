@class NSData;

@interface AWDNFCSERemovedEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char hardwareType : 1; unsigned char reason : 1; unsigned char hasCardEmulationStarted : 1; unsigned char hasExpressTransactionStarted : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) unsigned int reason;
@property (readonly, nonatomic) BOOL hasUuidReference;
@property (retain, nonatomic) NSData *uuidReference;
@property (nonatomic) BOOL hasHasCardEmulationStarted;
@property (nonatomic) BOOL hasCardEmulationStarted;
@property (nonatomic) BOOL hasHardwareType;
@property (nonatomic) unsigned int hardwareType;
@property (nonatomic) BOOL hasHasExpressTransactionStarted;
@property (nonatomic) BOOL hasExpressTransactionStarted;

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
