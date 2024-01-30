@interface NWAWDLBClientConnectionReport : PBCodable <NSCopying> {
    struct { unsigned char bytesReceived : 1; unsigned char bytesSent : 1; unsigned char connectionDuration : 1; unsigned char connectionServiceId : 1; unsigned char timeToConnectionFailure : 1; unsigned char timeToFirstResponse : 1; unsigned char timestamp : 1; unsigned char connectionJoiningFailure : 1; unsigned char connectionJoiningLbConnectionMigration : 1; unsigned char connectionJoiningLbConnectionState : 1; unsigned char dataPathResult : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasConnectionJoiningFailure;
@property (nonatomic) int connectionJoiningFailure;
@property (nonatomic) BOOL hasConnectionJoiningLbConnectionState;
@property (nonatomic) int connectionJoiningLbConnectionState;
@property (nonatomic) BOOL hasConnectionJoiningLbConnectionMigration;
@property (nonatomic) int connectionJoiningLbConnectionMigration;
@property (nonatomic) BOOL hasConnectionServiceId;
@property (nonatomic) unsigned long long connectionServiceId;
@property (nonatomic) BOOL hasConnectionDuration;
@property (nonatomic) long long connectionDuration;
@property (nonatomic) BOOL hasDataPathResult;
@property (nonatomic) int dataPathResult;
@property (nonatomic) BOOL hasBytesSent;
@property (nonatomic) long long bytesSent;
@property (nonatomic) BOOL hasBytesReceived;
@property (nonatomic) long long bytesReceived;
@property (nonatomic) BOOL hasTimeToFirstResponse;
@property (nonatomic) long long timeToFirstResponse;
@property (nonatomic) BOOL hasTimeToConnectionFailure;
@property (nonatomic) long long timeToConnectionFailure;

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
