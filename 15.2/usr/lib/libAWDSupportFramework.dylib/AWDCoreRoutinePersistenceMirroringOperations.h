@interface AWDCoreRoutinePersistenceMirroringOperations : PBCodable <NSCopying> {
    struct { unsigned char timeIntervalSinceLastOperation : 1; unsigned char timestamp : 1; unsigned char deviceClass : 1; unsigned char errorCount : 1; unsigned char operationType : 1; unsigned char qualityOfService : 1; unsigned char recordsChanged : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) int deviceClass;
@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) int operationType;
@property (nonatomic) BOOL hasRecordsChanged;
@property (nonatomic) int recordsChanged;
@property (nonatomic) BOOL hasErrorCount;
@property (nonatomic) int errorCount;
@property (nonatomic) BOOL hasTimeIntervalSinceLastOperation;
@property (nonatomic) long long timeIntervalSinceLastOperation;
@property (nonatomic) BOOL hasQualityOfService;
@property (nonatomic) int qualityOfService;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
