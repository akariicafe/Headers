@class NSOutputStream, NSString, NSMutableArray, NSMutableData, NSInputStream, NSObject;
@protocol OS_dispatch_queue;

@interface MCNearbyDiscoveryPeerConnection : NSObject <NSStreamDelegate> {
    BOOL _connected;
    NSMutableData *_dataReceived;
    BOOL _shouldSendHello;
    BOOL _readyToWrite;
    NSMutableData *_dataToSend;
    unsigned int _currentSequenceNumber;
    NSMutableData *_dataToSendHoldingQueue;
    NSMutableArray *_receivedDataHoldingQueue;
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

- (void)dealloc;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)invalidate;
- (void)syncSendData;
- (void)setupInputStream:(id)a0 outputStream:(id)a1;
- (void)syncSendHello;
- (void)syncAppendDataToSend:(id)a0;
- (void)syncCloseConnectionNow;
- (void)syncSendMessage:(int)a0 data:(id)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)shouldDecideAboutConnection;
- (void)syncSendMessageReceipt:(int)a0 sequenceNumber:(unsigned int)a1;
- (void)syncSendAccept;
- (void)syncAcceptedConnection;
- (void)syncProcessMessage:(int)a0 data:(id)a1 sequenceNumber:(unsigned int)a2;
- (void)syncReceivedData:(id)a0 error:(id)a1;
- (int)socketForStream:(id)a0;
- (void)syncHandleStreamEventOpenCompleted:(id)a0;
- (void)syncReadFromInputStream;
- (id)stringForStreamEventCode:(unsigned long long)a0;
- (void)syncHandleInputStreamEvent:(unsigned long long)a0;
- (void)syncHandleOutputStreamEvent:(unsigned long long)a0;
- (id)initWithLocalServiceName:(id)a0;
- (void)connectToNetService:(id)a0;
- (void)attachInputStream:(id)a0 outputStream:(id)a1;
- (void)sendData:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
