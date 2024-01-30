@class NSString, NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

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

+ (Class)handlerReturnStatusDataType;

- (void).cxx_destruct;
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
- (void)addHandlerReturnStatusData:(id)a0;
- (void)clearHandlerReturnStatus;
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

@end
