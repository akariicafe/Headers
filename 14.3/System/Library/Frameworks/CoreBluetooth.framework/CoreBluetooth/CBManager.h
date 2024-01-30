@class NSString, CBPairingAgent, NSData, CBXpcConnection;

@interface CBManager : NSObject <CBXpcConnectionDelegate, CBPairingAgentParentDelegate> {
    CBXpcConnection *_connection;
    CBPairingAgent *_pairingAgent;
}

@property (class, readonly, nonatomic) long long authorization;

@property (nonatomic) long long state;
@property (nonatomic) BOOL tccComplete;
@property (readonly, retain, nonatomic) CBPairingAgent *sharedPairingAgent;
@property (copy, nonatomic) NSData *advertisingAddress;
@property (readonly, nonatomic) long long advertisingAddressType;
@property (copy, nonatomic) NSData *nonConnectableAdvertisingAddress;
@property (readonly, nonatomic) long long nonConnectableAdvertisingAddressType;
@property (readonly) NSString *localAddressString;
@property (readonly) NSString *localName;
@property (readonly, nonatomic) long long authorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)tccAvailable;

- (id)peerWithInfo:(id)a0;
- (BOOL)sendDebugMsg:(unsigned short)a0 args:(id)a1;
- (id)sendDebugSyncMsg:(unsigned short)a0 args:(id)a1;
- (void)xpcConnectionIsInvalid;
- (void)handleStateUpdatedMsg:(id)a0;
- (BOOL)sendRawCommand:(unsigned short)a0 data:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleLocalDeviceStateUpdatedMsg:(id)a0;
- (void)_handleAdvertisingAddressChanged:(id)a0;
- (id)sharedPairingAgent;
- (void)doneWithTCC;
- (void)setConnectionTargetQueue:(id)a0;
- (void)closeL2CAPChannelForPeerUUID:(id)a0 withPsm:(unsigned short)a1;
- (id)sendSyncMsg:(unsigned short)a0 args:(id)a1;
- (BOOL)isMsgAllowedWhenOff:(unsigned short)a0;
- (BOOL)sendMsg:(unsigned short)a0 args:(id)a1;
- (void)xpcConnectionDidReset;
- (void)startWithQueue:(id)a0 options:(id)a1 sessionType:(int)a2;
- (id)initInternal;
- (void)performTCCCheck:(id)a0;
- (unsigned int)getAppSDKVersion;
- (void)xpcConnectionDidReceiveMsg:(unsigned short)a0 args:(id)a1;
- (void)extractLocalDeviceStatesDictionary:(id)a0;
- (void)handlePairingAgentMsg:(unsigned short)a0 args:(id)a1;
- (void)triggerBTErrorReport:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleMsg:(unsigned short)a0 args:(id)a1;
- (BOOL)isMsgAllowedAlways:(unsigned short)a0;

@end
