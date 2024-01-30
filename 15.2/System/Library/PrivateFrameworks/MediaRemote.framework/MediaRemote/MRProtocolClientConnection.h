@class MRSupportedProtocolMessages, NSString, MSVMessageParser, NSMutableDictionary, NSError, MRDeviceInfo, MRExternalDeviceTransportConnection;
@protocol MRProtocolClientConnectionDelegate;

@interface MRProtocolClientConnection : NSObject <MSVMessageParserDelegate, MRExternalDeviceTransportConnectionDelegate> {
    MSVMessageParser *_parser;
    unsigned long long _firstClientNanoseconds;
    unsigned long long _firstDeviceTicks;
    MRSupportedProtocolMessages *_supportedMessages;
    NSMutableDictionary *_pendingReplyQueue;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) MRDeviceInfo *deviceInfo;
@property (retain, nonatomic) MRSupportedProtocolMessages *supportedMessages;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL disconnected;
@property (readonly, nonatomic) MRExternalDeviceTransportConnection *connection;
@property (weak, nonatomic) id<MRProtocolClientConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMessage:(id)a0;
- (id)initWithConnection:(id)a0;
- (void)transportDidClose:(id)a0 error:(id)a1;
- (void)transport:(id)a0 didReceiveData:(id)a1;
- (void)sendMessage:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (id)dataForMessage:(id)a0;
- (id)decryptData:(id)a0 error:(id *)a1;
- (void)sendMessage:(id)a0 expectedMessage:(unsigned long long)a1 timeout:(double)a2 queue:(id)a3 reply:(id /* block */)a4;
- (void)sendMessage:(id)a0 timeout:(double)a1 queue:(id)a2 reply:(id /* block */)a3;
- (void)dealloc;
- (void)disconnectWithError:(id)a0;
- (id)encryptDataForMessage:(id)a0;
- (void)parser:(id)a0 didParseMessage:(id)a1;

@end
