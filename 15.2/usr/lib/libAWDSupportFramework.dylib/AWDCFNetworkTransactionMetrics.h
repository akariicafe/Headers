@class NSString;

@interface AWDCFNetworkTransactionMetrics : PBCodable <NSCopying> {
    struct { unsigned char requestEnd : 1; unsigned char requestStart : 1; unsigned char responseEnd : 1; unsigned char responseStart : 1; unsigned char timestamp : 1; unsigned char totalBytesExpectedToRead : 1; unsigned char totalBytesExpectedToWrite : 1; unsigned char totalBytesRead : 1; unsigned char totalBytesWritten : 1; unsigned char http3Status : 1; unsigned char networkLoadType : 1; unsigned char networkProtocolName : 1; unsigned char apsRelayAttempted : 1; unsigned char apsRelaySucceeded : 1; unsigned char isRedirected : 1; unsigned char reusedConnection : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNetworkProtocolName;
@property (nonatomic) int networkProtocolName;
@property (nonatomic) BOOL hasNetworkLoadType;
@property (nonatomic) int networkLoadType;
@property (nonatomic) BOOL hasReusedConnection;
@property (nonatomic) BOOL reusedConnection;
@property (nonatomic) BOOL hasIsRedirected;
@property (nonatomic) BOOL isRedirected;
@property (nonatomic) BOOL hasRequestStart;
@property (nonatomic) unsigned long long requestStart;
@property (nonatomic) BOOL hasRequestEnd;
@property (nonatomic) unsigned long long requestEnd;
@property (nonatomic) BOOL hasResponseStart;
@property (nonatomic) unsigned long long responseStart;
@property (nonatomic) BOOL hasResponseEnd;
@property (nonatomic) unsigned long long responseEnd;
@property (nonatomic) BOOL hasTotalBytesWritten;
@property (nonatomic) unsigned long long totalBytesWritten;
@property (nonatomic) BOOL hasTotalBytesRead;
@property (nonatomic) unsigned long long totalBytesRead;
@property (readonly, nonatomic) BOOL hasConnectionUUID;
@property (retain, nonatomic) NSString *connectionUUID;
@property (nonatomic) BOOL hasApsRelayAttempted;
@property (nonatomic) BOOL apsRelayAttempted;
@property (nonatomic) BOOL hasApsRelaySucceeded;
@property (nonatomic) BOOL apsRelaySucceeded;
@property (nonatomic) BOOL hasTotalBytesExpectedToWrite;
@property (nonatomic) unsigned long long totalBytesExpectedToWrite;
@property (nonatomic) BOOL hasTotalBytesExpectedToRead;
@property (nonatomic) unsigned long long totalBytesExpectedToRead;
@property (nonatomic) BOOL hasHttp3Status;
@property (nonatomic) int http3Status;

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
- (id)networkProtocolNameAsString:(int)a0;
- (int)StringAsNetworkProtocolName:(id)a0;
- (id)networkLoadTypeAsString:(int)a0;
- (int)StringAsNetworkLoadType:(id)a0;
- (id)http3StatusAsString:(int)a0;
- (int)StringAsHttp3Status:(id)a0;

@end
