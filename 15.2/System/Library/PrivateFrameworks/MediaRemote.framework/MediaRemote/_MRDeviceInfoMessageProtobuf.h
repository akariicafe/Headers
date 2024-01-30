@class NSString, NSMutableArray, NSData;

@interface _MRDeviceInfoMessageProtobuf : PBCodable <NSCopying> {
    unsigned long long _protocolVersion;
    NSString *_airPlayGroupID;
    NSMutableArray *_airplayReceivers;
    NSString *_applicationBundleIdentifier;
    NSString *_applicationBundleVersion;
    NSData *_bluetoothAddress;
    NSString *_clusterID;
    NSString *_clusterLeaderID;
    unsigned int _clusterType;
    int _deviceClass;
    NSString *_deviceUID;
    NSString *_groupName;
    NSString *_groupUID;
    NSMutableArray *_groupedDevices;
    unsigned int _lastSupportedMessageType;
    NSString *_linkAgent;
    NSString *_localizedModelName;
    unsigned int _logicalDeviceCount;
    NSString *_managedConfigDeviceID;
    NSString *_modelID;
    NSString *_name;
    NSString *_routingContextID;
    NSString *_senderDefaultGroupUID;
    unsigned int _sharedQueueVersion;
    NSString *_systemBooksApplication;
    NSString *_systemBuildVersion;
    NSString *_systemMediaApplication;
    NSString *_systemPodcastApplication;
    NSString *_tightSyncUID;
    NSString *_uniqueIdentifier;
    BOOL _allowsPairing;
    BOOL _connected;
    BOOL _isAirplayActive;
    BOOL _isClusterAware;
    BOOL _isGroupLeader;
    BOOL _isProxyGroupPlayer;
    BOOL _supportsACL;
    BOOL _supportsExtendedMotion;
    BOOL _supportsMultiplayer;
    BOOL _supportsSharedQueue;
    BOOL _supportsSystemPairing;
    BOOL _tightlySyncedGroup;
    struct { unsigned char protocolVersion : 1; unsigned char clusterType : 1; unsigned char deviceClass : 1; unsigned char lastSupportedMessageType : 1; unsigned char logicalDeviceCount : 1; unsigned char sharedQueueVersion : 1; unsigned char allowsPairing : 1; unsigned char connected : 1; unsigned char isAirplayActive : 1; unsigned char isClusterAware : 1; unsigned char isGroupLeader : 1; unsigned char isProxyGroupPlayer : 1; unsigned char supportsACL : 1; unsigned char supportsExtendedMotion : 1; unsigned char supportsMultiplayer : 1; unsigned char supportsSharedQueue : 1; unsigned char supportsSystemPairing : 1; unsigned char tightlySyncedGroup : 1; } _has;
}

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
