@class NSString, NSRunLoop, NSOutputStream, NSInputStream, MRSupportedProtocolMessages, MSVMessageParser, MRDeviceInfo, MRProtocolMessageQueue;
@protocol MRProtocolClientConnectionDelegate;

@interface MRProtocolClientConnection : NSObject <NSStreamDelegate, MSVMessageParserDelegate, MRProtocolMessageQueueDelegate, MRProtocolMessageQueueDataSource> {
    MSVMessageParser *_parser;
    MRProtocolMessageQueue *_messageQueue;
    unsigned long long _firstClientNanoseconds;
    unsigned long long _firstDeviceTicks;
    MRSupportedProtocolMessages *_supportedMessages;
}

@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (retain, nonatomic) MRDeviceInfo *deviceInfo;
@property (retain, nonatomic) MRSupportedProtocolMessages *supportedMessages;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL streamsAreValid;
@property (readonly, nonatomic) BOOL disconnected;
@property (retain, nonatomic) NSRunLoop *runLoop;
@property (weak, nonatomic) id<MRProtocolClientConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)parser:(id)a0 didParseMessage:(id)a1;
- (void)dealloc;
- (void)disconnectWithError:(id)a0;
- (void)sendMessage:(id)a0 queue:(id)a1 reply:(id /* block */)a2;
- (void)sendMessage:(id)a0 expectedMessage:(unsigned long long)a1 timeout:(double)a2 queue:(id)a3 reply:(id /* block */)a4;
- (void)sendMessage:(id)a0 timeout:(double)a1 queue:(id)a2 reply:(id /* block */)a3;
- (id)decryptData:(id)a0 error:(id *)a1;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (id)encryptDataForMessage:(id)a0;
- (unsigned long long)messageQueue:(id)a0 processData:(id)a1 atReadPosition:(long long)a2;
- (void)messageQueue:(id)a0 didSendMessage:(id)a1;
- (void)messageQueue:(id)a0 didPurgeMessage:(id)a1;
- (id)messageQueue:(id)a0 dataForMessage:(id)a1;
- (id)initWithInputStream:(id)a0 outputStream:(id)a1 runLoop:(id)a2;

@end
