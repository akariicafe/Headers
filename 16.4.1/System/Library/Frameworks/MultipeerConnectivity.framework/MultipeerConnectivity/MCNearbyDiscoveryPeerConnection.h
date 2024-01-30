@class NSOutputStream, NSString, NSMutableArray, NSMutableData, NSInputStream, NSObject;
@protocol OS_dispatch_queue;

@interface MCNearbyDiscoveryPeerConnection : NSObject <NSStreamDelegate> {
    BOOL _connected;
    BOOL _connectionClosed;
    NSMutableData *_dataReceived;
    BOOL _shouldSendHello;
    BOOL _readyToWrite;
    NSMutableData *_dataToSend;
    unsigned int _currentSequenceNumber;
    NSMutableData *_dataToSendHoldingQueue;
    NSMutableArray *_receivedDataHoldingQueue;
    NSMutableArray *_receivedDataContentHoldingQueue;
    NSMutableArray *_messageReceiptHandlerList;
    NSMutableArray *_messageReceiptHandlerHoldingQueue;
}

@property (copy, nonatomic) NSString *remoteServiceName;
@property (copy, nonatomic) NSString *localServiceName;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (copy, nonatomic) id /* block */ receiveDataHandler;
@property (copy, nonatomic) id /* block */ connectedHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)dealloc;
- (void)invalidate;
- (void)attachInputStream:(id)a0 outputStream:(id)a1;
- (void)sendData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)connectToNetService:(id)a0;
- (id)initWithLocalServiceName:(id)a0;
- (void)setupInputStream:(id)a0 outputStream:(id)a1;
- (BOOL)shouldDecideAboutConnection;
- (int)socketForStream:(id)a0;
- (id)stringForStreamEventCode:(unsigned long long)a0;
- (void)syncAcceptedConnection;
- (void)syncAppendDataToSend:(id)a0;
- (void)syncCloseConnectionNow;
- (void)syncHandleInputStreamEvent:(unsigned long long)a0;
- (void)syncHandleOutputStreamEvent:(unsigned long long)a0;
- (void)syncHandleStreamEventOpenCompleted:(id)a0;
- (void)syncProcessMessage:(int)a0 data:(id)a1 sequenceNumber:(unsigned int)a2;
- (void)syncReadFromInputStream;
- (void)syncReceivedData:(id)a0 error:(id)a1;
- (void)syncSendAccept;
- (void)syncSendData;
- (void)syncSendHello;
- (void)syncSendMessage:(int)a0 data:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)syncSendMessageReceipt:(int)a0 sequenceNumber:(unsigned int)a1;

@end
