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

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)shuttingDownSession;
- (BOOL)openPipeToApp;
- (BOOL)openPipeFromApp;
- (void)_openPipeToApp;
- (void)_openPipeFromApp;
- (id)initWithProtocol:(id)a0 endpointUUID:(id)a1 eaSessionUUID:(id)a2;
- (BOOL)closeDataPipes;
- (int)_createListenSocket;

@end
