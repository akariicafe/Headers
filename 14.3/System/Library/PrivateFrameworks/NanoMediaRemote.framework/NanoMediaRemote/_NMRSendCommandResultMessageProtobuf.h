@interface _NMRSendCommandResultMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _handlerReturnStatus;
    struct { unsigned char timestamp : 1; unsigned char errorCode : 1; unsigned char originIdentifier : 1; } _has;
}

@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) unsigned int errorCode;
@property (readonly, nonatomic) unsigned long long handlerReturnStatusCount;
@property (readonly, nonatomic) unsigned int *handlerReturnStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

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
- (void)clearHandlerReturnStatus;
- (unsigned int)handlerReturnStatusAtIndex:(unsigned long long)a0;
- (void)addHandlerReturnStatus:(unsigned int)a0;
- (void)setHandlerReturnStatus:(unsigned int *)a0 count:(unsigned long long)a1;

@end
