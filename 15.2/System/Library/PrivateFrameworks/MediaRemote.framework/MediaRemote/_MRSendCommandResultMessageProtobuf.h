@class _MRNowPlayingPlayerPathProtobuf, NSString, NSMutableArray, _MRSendCommandResultProtobuf;

@interface _MRSendCommandResultMessageProtobuf : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _handlerReturnStatus;
    struct { unsigned char sendError : 1; } _has;
}

@property (nonatomic) BOOL hasSendError;
@property (nonatomic) int sendError;
@property (readonly, nonatomic) unsigned long long handlerReturnStatusCount;
@property (readonly, nonatomic) int *handlerReturnStatus;
@property (retain, nonatomic) NSMutableArray *handlerReturnStatusDatas;
@property (readonly, nonatomic) BOOL hasCommandID;
@property (retain, nonatomic) NSString *commandID;
@property (readonly, nonatomic) BOOL hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (readonly, nonatomic) BOOL hasCommandResult;
@property (retain, nonatomic) _MRSendCommandResultProtobuf *commandResult;

+ (Class)handlerReturnStatusDataType;

- (BOOL)readFrom:(id)a0;
- (void)clearHandlerReturnStatus;
- (id)description;
- (void)addHandlerReturnStatusData:(id)a0;
- (int)handlerReturnStatusAtIndex:(unsigned long long)a0;
- (void)addHandlerReturnStatus:(int)a0;
- (unsigned long long)handlerReturnStatusDatasCount;
- (void)clearHandlerReturnStatusDatas;
- (id)handlerReturnStatusDataAtIndex:(unsigned long long)a0;
- (id)sendErrorAsString:(int)a0;
- (int)StringAsSendError:(id)a0;
- (void)setHandlerReturnStatus:(int *)a0 count:(unsigned long long)a1;
- (id)handlerReturnStatusAsString:(int)a0;
- (int)StringAsHandlerReturnStatus:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
