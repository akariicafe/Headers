@class NSUUID, NSData, _IDSDataChannelLinkContext;

@interface IDSDataChannelLinkContext : NSObject {
    _IDSDataChannelLinkContext *_internal;
}

@property (readonly) char linkID;
@property (readonly) NSUUID *linkUUID;
@property (readonly) NSUUID *QRSessionID;
@property (readonly) unsigned char networkType;
@property (readonly) long long connectionType;
@property (readonly) unsigned int RATType;
@property (readonly) unsigned short maxMTU;
@property (readonly) long long relayServerProvider;
@property (readonly) NSData *relaySessionToken;
@property (readonly) NSData *relaySessionKey;
@property (readonly) unsigned char remoteNetworkType;
@property (readonly) long long remoteConnectionType;
@property (readonly) unsigned int remoteRATType;
@property (readonly) unsigned int maxBitrate;
@property (readonly) BOOL serverIsDegraded;
@property (readonly) unsigned short localLinkFlags;
@property (readonly) unsigned short remoteLinkFlags;
@property (readonly) unsigned int localDataSoMask;
@property (readonly) unsigned int remoteDataSoMask;

- (id)initWithLinkID:(char)a0 linkUUID:(id)a1 QRSessionID:(id)a2 networkType:(unsigned char)a3 connectionType:(long long)a4 RATType:(unsigned int)a5 MTU:(unsigned short)a6 remoteNetworkType:(unsigned char)a7 remoteConnectionType:(long long)a8 remoteRATType:(unsigned int)a9 maxBitrate:(unsigned int)a10 relayServerProvider:(long long)a11 relaySessionToken:(id)a12 relaySessionKey:(id)a13 serverIsDegraded:(BOOL)a14;
- (void).cxx_destruct;
- (void)setRATType:(unsigned int)a0;
- (void)setMTU:(unsigned short)a0;
- (id)initWithDummyInformation;
- (id)initWithAttributes:(struct { unsigned char x0[16]; unsigned char x1[16]; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned short x10; unsigned short x11; unsigned int x12; unsigned int x13; unsigned short x14; unsigned char x15[2]; } *)a0 maxBitrate:(unsigned int)a1 relayServerProvider:(long long)a2 relaySessionToken:(id)a3 relaySessionKey:(id)a4;
- (void)setMaxBitrate:(unsigned int)a0;
- (id)description;

@end
