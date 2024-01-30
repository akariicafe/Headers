@interface AWDCallHistoryNilUuid : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char callStatus : 1; unsigned char callType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCallType;
@property (nonatomic) unsigned int callType;
@property (nonatomic) BOOL hasCallStatus;
@property (nonatomic) unsigned int callStatus;

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
