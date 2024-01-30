@class NSUUID, NSData;

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
}

- (void).cxx_destruct;
- (id)description;

@end
