@class NSData;

@interface AWDNFCHCIStartOfTransactionV2Event : PBCodable <NSCopying> {
    struct { unsigned char timeDeltaFromReference : 1; unsigned char timestamp : 1; unsigned char command : 1; unsigned char commandParam1 : 1; unsigned char commandResult : 1; unsigned char expressType : 1; unsigned char version : 1; unsigned char isLongTransaction : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL hasCommand;
@property (nonatomic) unsigned int command;
@property (nonatomic) BOOL hasCommandParam1;
@property (nonatomic) unsigned int commandParam1;
@property (nonatomic) BOOL hasCommandResult;
@property (nonatomic) unsigned int commandResult;
@property (nonatomic) BOOL hasIsLongTransaction;
@property (nonatomic) BOOL isLongTransaction;
@property (nonatomic) BOOL hasExpressType;
@property (nonatomic) unsigned int expressType;
@property (readonly, nonatomic) BOOL hasUuidReference;
@property (retain, nonatomic) NSData *uuidReference;
@property (nonatomic) BOOL hasTimeDeltaFromReference;
@property (nonatomic) unsigned long long timeDeltaFromReference;

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
