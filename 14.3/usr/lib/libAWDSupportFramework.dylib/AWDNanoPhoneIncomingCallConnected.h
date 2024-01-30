@class NSString;

@interface AWDNanoPhoneIncomingCallConnected : PBCodable <NSCopying> {
    struct { unsigned char connectingMs : 1; unsigned char timestamp : 1; unsigned char isHosted : 1; unsigned char isVideo : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasConnectingMs;
@property (nonatomic) unsigned long long connectingMs;
@property (readonly, nonatomic) BOOL hasCallProviderIdentifier;
@property (retain, nonatomic) NSString *callProviderIdentifier;
@property (nonatomic) BOOL hasIsVideo;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL hasIsHosted;
@property (nonatomic) BOOL isHosted;

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
