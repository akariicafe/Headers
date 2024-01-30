@class NSString, NSObject;
@protocol OS_dispatch_queue, RMSPairingServerDelegate;

@interface RMSPairingServer : NSObject {
    struct __CFDictionary { } *_HTTPServerConnections;
    struct _CFHTTPServer { } *_HTTPServer;
    NSObject<OS_dispatch_queue> *_HTTPServerQueue;
    NSString *_expectedPasscodeHash;
    NSString *_successfulPairingGUID;
    NSString *_successfulPairingServiceName;
    NSString *_advertisedDeviceName;
    NSString *_advertisedDeviceModel;
}

@property (weak, nonatomic) id<RMSPairingServerDelegate> delegate;
@property (readonly, nonatomic) unsigned short port;

- (void)stopServer;
- (void).cxx_destruct;
- (void)handleHTTPServerConnectionDidFailToReplyToRequest:(struct _CFHTTPServerRequest { } *)a0 withResponse:(struct _CFHTTPServerResponse { } *)a1;
- (id)_parsedQueryParametersWithQueryString:(id)a0;
- (void)handleHTTPServerConnectionDidReceiveError:(struct __CFError { } *)a0;
- (void)handleHTTPServerConnectionDidReceiveRequest:(struct _CFHTTPServerRequest { } *)a0;
- (void)handleHTTPServerConnectionDidReplyToRequest:(struct _CFHTTPServerRequest { } *)a0 withResponse:(struct _CFHTTPServerResponse { } *)a1;
- (void)handleHTTPServerConnectionInvalidated;
- (void)handleHTTPServerDidCloseConnection:(struct _CFHTTPServerConnection { } *)a0;
- (void)handleHTTPServerDidOpenConnection:(struct _CFHTTPServerConnection { } *)a0;
- (void)handleHTTPServerDidReceiveError:(struct __CFError { } *)a0;
- (void)handleHTTPServerInvalidated;
- (BOOL)startServerWithExpectedPasscodeHash:(id)a0 advertisedDeviceName:(id)a1 advertisedDeviceModel:(id)a2;

@end
