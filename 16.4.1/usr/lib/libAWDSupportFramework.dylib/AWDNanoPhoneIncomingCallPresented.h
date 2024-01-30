@class NSString;

@interface AWDNanoPhoneIncomingCallPresented : PBCodable <NSCopying> {
    struct { unsigned char clientDisplayLatencyMs : 1; unsigned char timestamp : 1; unsigned char isHosted : 1; unsigned char isVideo : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasClientDisplayLatencyMs;
@property (nonatomic) unsigned long long clientDisplayLatencyMs;
@property (readonly, nonatomic) BOOL hasCallProviderIdentifier;
@property (retain, nonatomic) NSString *callProviderIdentifier;
@property (nonatomic) BOOL hasIsVideo;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL hasIsHosted;
@property (nonatomic) BOOL isHosted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
