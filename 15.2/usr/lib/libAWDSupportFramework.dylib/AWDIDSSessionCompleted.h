@class NSString;

@interface AWDIDSSessionCompleted : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char clientType : 1; unsigned char destinationType : 1; unsigned char durationOfSession : 1; unsigned char durationToConnect : 1; unsigned char endedReason : 1; unsigned char isCellularInterfaceDisallowed : 1; unsigned char isInitiator : 1; unsigned char isLegacySessionType : 1; unsigned char isNetworkActive : 1; unsigned char isNetworkEnabled : 1; unsigned char isNetworkReachable : 1; unsigned char isQREnabled : 1; unsigned char isUsingQRDirectly : 1; unsigned char isWifiInterfaceDisallowed : 1; unsigned char isWithDefaultPairedDevice : 1; unsigned char linkProtocol : 1; unsigned char linkType : 1; unsigned char sessionProtocolVersionNumber : 1; unsigned char transportType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasSessionProtocolVersionNumber;
@property (nonatomic) unsigned int sessionProtocolVersionNumber;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) BOOL hasClientType;
@property (nonatomic) int clientType;
@property (nonatomic) BOOL hasIsQREnabled;
@property (nonatomic) unsigned int isQREnabled;
@property (nonatomic) BOOL hasIsUsingQRDirectly;
@property (nonatomic) unsigned int isUsingQRDirectly;
@property (nonatomic) BOOL hasIsInitiator;
@property (nonatomic) unsigned int isInitiator;
@property (nonatomic) BOOL hasIsLegacySessionType;
@property (nonatomic) unsigned int isLegacySessionType;
@property (nonatomic) BOOL hasIsWithDefaultPairedDevice;
@property (nonatomic) unsigned int isWithDefaultPairedDevice;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) BOOL hasLinkProtocol;
@property (nonatomic) unsigned int linkProtocol;
@property (nonatomic) BOOL hasEndedReason;
@property (nonatomic) unsigned int endedReason;
@property (nonatomic) BOOL hasDurationOfSession;
@property (nonatomic) unsigned int durationOfSession;
@property (nonatomic) BOOL hasDurationToConnect;
@property (nonatomic) unsigned int durationToConnect;
@property (nonatomic) BOOL hasIsNetworkEnabled;
@property (nonatomic) unsigned int isNetworkEnabled;
@property (nonatomic) BOOL hasIsNetworkActive;
@property (nonatomic) unsigned int isNetworkActive;
@property (nonatomic) BOOL hasIsNetworkReachable;
@property (nonatomic) unsigned int isNetworkReachable;
@property (nonatomic) BOOL hasIsWifiInterfaceDisallowed;
@property (nonatomic) unsigned int isWifiInterfaceDisallowed;
@property (nonatomic) BOOL hasIsCellularInterfaceDisallowed;
@property (nonatomic) unsigned int isCellularInterfaceDisallowed;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) unsigned int linkType;
@property (nonatomic) BOOL hasDestinationType;
@property (nonatomic) unsigned int destinationType;

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
