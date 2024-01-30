@class NSString;

@interface AWDOSAnalyticsSubmissions : PBCodable <NSCopying> {
    struct { unsigned char logs : 1; unsigned char seconds : 1; unsigned char sizeBytes : 1; unsigned char timestamp : 1; unsigned char response : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasResponse;
@property (nonatomic) int response;
@property (readonly, nonatomic) BOOL hasConnection;
@property (retain, nonatomic) NSString *connection;
@property (readonly, nonatomic) BOOL hasRouting;
@property (retain, nonatomic) NSString *routing;
@property (nonatomic) BOOL hasSizeBytes;
@property (nonatomic) unsigned long long sizeBytes;
@property (nonatomic) BOOL hasLogs;
@property (nonatomic) unsigned long long logs;
@property (nonatomic) BOOL hasSeconds;
@property (nonatomic) unsigned long long seconds;

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

@end
