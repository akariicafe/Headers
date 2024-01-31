@class NSString;

@interface iAP2EASession : NSObject {
    NSString *_endpointUUID;
    NSString *_eaSessionUUID;
    int _listenSock;
    int _sock;
    BOOL _openPipeToAppAfterAccept;
    BOOL _openPipeFromAppAfterAccept;
    BOOL _isWirelessSession;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)openPipeFromApp;
- (int)_createListenSocket;
- (void)_openPipeFromApp;
- (void)_openPipeToApp;
- (BOOL)closeDataPipes;
- (id)initWithProtocol:(id)a0 endpointUUID:(id)a1 eaSessionUUID:(id)a2;
- (BOOL)openPipeToApp;
- (void)shuttingDownSession;

@end
