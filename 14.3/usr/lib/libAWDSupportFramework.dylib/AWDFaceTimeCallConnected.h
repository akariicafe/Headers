@class NSString;

@interface AWDFaceTimeCallConnected : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connectDuration : 1; unsigned char connectionType : 1; unsigned char currentNatType : 1; unsigned char isVideo : 1; unsigned char localNetworkConnection : 1; unsigned char onLockScreen : 1; unsigned char relayConnectDuration : 1; unsigned char remoteNatType : 1; unsigned char remoteNetworkConnection : 1; unsigned char usesRelay : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasConnectDuration;
@property (nonatomic) unsigned int connectDuration;
@property (nonatomic) BOOL hasRemoteNetworkConnection;
@property (nonatomic) unsigned int remoteNetworkConnection;
@property (nonatomic) BOOL hasLocalNetworkConnection;
@property (nonatomic) unsigned int localNetworkConnection;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) BOOL hasUsesRelay;
@property (nonatomic) unsigned int usesRelay;
@property (nonatomic) BOOL hasCurrentNatType;
@property (nonatomic) unsigned int currentNatType;
@property (nonatomic) BOOL hasRemoteNatType;
@property (nonatomic) unsigned int remoteNatType;
@property (nonatomic) BOOL hasRelayConnectDuration;
@property (nonatomic) unsigned int relayConnectDuration;
@property (nonatomic) BOOL hasIsVideo;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) BOOL hasOnLockScreen;
@property (nonatomic) unsigned int onLockScreen;

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
