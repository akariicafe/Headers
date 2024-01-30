@class NSString, NSMutableArray;

@interface PDSProtoBatchRegisterResp : PBCodable <NSCopying> {
    struct { unsigned char responseTtl : 1; unsigned char retryInterval : 1; } _has;
}

@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSMutableArray *userPushTokenRegResponses;
@property (nonatomic) BOOL hasResponseTtl;
@property (nonatomic) long long responseTtl;
@property (nonatomic) BOOL hasRetryInterval;
@property (nonatomic) long long retryInterval;

+ (Class)userPushTokenRegResponsesType;

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
- (void)addUserPushTokenRegResponses:(id)a0;
- (unsigned long long)userPushTokenRegResponsesCount;
- (void)clearUserPushTokenRegResponses;
- (id)userPushTokenRegResponsesAtIndex:(unsigned long long)a0;

@end
