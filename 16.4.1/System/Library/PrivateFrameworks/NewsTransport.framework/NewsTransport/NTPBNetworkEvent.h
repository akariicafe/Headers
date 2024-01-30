@class NSString;

@interface NTPBNetworkEvent : PBCodable <NSCopying> {
    struct { unsigned char connectDuration : 1; unsigned char dnsDuration : 1; unsigned char errorCode : 1; unsigned char httpStatusCode : 1; unsigned char requestDuration : 1; unsigned char responseDuration : 1; unsigned char responseSize : 1; unsigned char sessionID : 1; unsigned char startTime : 1; unsigned char cacheState : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) BOOL hasDnsDuration;
@property (nonatomic) unsigned long long dnsDuration;
@property (nonatomic) BOOL hasConnectDuration;
@property (nonatomic) unsigned long long connectDuration;
@property (nonatomic) BOOL hasRequestDuration;
@property (nonatomic) unsigned long long requestDuration;
@property (nonatomic) BOOL hasResponseDuration;
@property (nonatomic) unsigned long long responseDuration;
@property (nonatomic) BOOL hasResponseSize;
@property (nonatomic) unsigned long long responseSize;
@property (nonatomic) BOOL hasCacheState;
@property (nonatomic) int cacheState;
@property (nonatomic) BOOL hasHttpStatusCode;
@property (nonatomic) unsigned long long httpStatusCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) long long errorCode;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) BOOL hasRequestUUID;
@property (retain, nonatomic) NSString *requestUUID;
@property (readonly, nonatomic) BOOL hasRespondingPOP;
@property (retain, nonatomic) NSString *respondingPOP;
@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) unsigned long long sessionID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
