@class NSString;

@interface AWDIDSWiFiSetupAttempt : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char result : 1; unsigned char timestamp : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) unsigned long long result;
@property (readonly, nonatomic) BOOL hasClient;
@property (retain, nonatomic) NSString *client;

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

@end
