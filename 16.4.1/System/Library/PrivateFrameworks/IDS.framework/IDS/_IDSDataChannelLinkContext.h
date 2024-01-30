@class NSUUID, NSData, NSString;

@interface _IDSDataChannelLinkContext : NSObject {
    char _linkID;
    unsigned char _networkType;
    long long _connectionType;
    unsigned int _RATType;
    unsigned short _maxMTU;
    unsigned char _remoteNetworkType;
    long long _remoteConnectionType;
    unsigned int _remoteRATType;
    unsigned int _maxBitrate;
    NSUUID *_linkUUID;
    NSUUID *_QRSessionID;
    long long _relayServerProvider;
    NSData *_relaySessionToken;
    NSData *_relaySessionKey;
    BOOL _serverIsDegraded;
    unsigned short _localLinkFlags;
    unsigned short _remoteLinkFlags;
    unsigned int _localDataSoMask;
    unsigned int _remoteDataSoMask;
    BOOL _isVirtualRelayLink;
    NSString *_localInterfaceName;
    unsigned short _channelNumber;
    NSData *_hbhEncryptionkey;
    NSData *_hbhDecryptionkey;
    NSUUID *_childConnectionID;
    unsigned long long _parentUniquePID;
    char _delegatedLinkID;
    unsigned short _localRelayLinkID;
    unsigned short _remoteRelayLinkID;
    BOOL _directConnectionIsReady;
}

- (id)description;
- (void).cxx_destruct;

@end
