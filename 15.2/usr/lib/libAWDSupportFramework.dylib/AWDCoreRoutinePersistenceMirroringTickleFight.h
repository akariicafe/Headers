@interface AWDCoreRoutinePersistenceMirroringTickleFight : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _tickleTimes;
    struct { unsigned char timestamp : 1; unsigned char operationType : 1; unsigned char recordType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) unsigned long long tickleTimesCount;
@property (readonly, nonatomic) int *tickleTimes;
@property (nonatomic) BOOL hasRecordType;
@property (nonatomic) int recordType;
@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) int operationType;

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
- (void)clearTickleTimes;
- (int)tickleTimesAtIndex:(unsigned long long)a0;
- (void)addTickleTimes:(int)a0;
- (void)setTickleTimes:(int *)a0 count:(unsigned long long)a1;

@end
