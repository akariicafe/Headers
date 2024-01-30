@class NSOutputStream, NSString, NSData, NSObject, NSInputStream;
@protocol MFComposeActivityHandoffOperationDelegate, OS_dispatch_queue;

@interface MFComposeActivityHandoffOperation : NSOperation <NSStreamDelegate> {
    BOOL _finished;
    BOOL _executing;
    NSObject<OS_dispatch_queue> *_streamHandlerQueue;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    unsigned long long _draftDataByteIndex;
    BOOL _doneWithInputStream;
    BOOL _doneWithOutputStream;
}

@property (retain, nonatomic) NSData *draftData;
@property (readonly, nonatomic) unsigned long long bytesReceived;
@property (readonly, nonatomic) unsigned long long bytesExpected;
@property (nonatomic) long long transmissionType;
@property (weak, nonatomic) id<MFComposeActivityHandoffOperationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)receivingOperationWithInputStream:(id)a0 outputStream:(id)a1;
+ (id)sendingOperationWithDraftData:(id)a0 inputStream:(id)a1 outputStream:(id)a2;

- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)_complete;
- (BOOL)isConcurrent;
- (void)dealloc;
- (void)start;
- (void).cxx_destruct;
- (id)initWithInputStream:(id)a0 outputStream:(id)a1;
- (void)_setExecuting:(BOOL)a0;
- (void)_setFinished:(BOOL)a0;
- (void)_sendingDataStream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)_failedToTransferHandoffPayload;
- (void)_checkInHandoffStream:(id)a0;
- (void)_commonHandoffStreamInitializationWithStream:(id)a0;
- (void)_didFinishTransferringHandoffPayload;
- (void)_finishReceivingHandoffDataAndCloseStream;
- (void)_handleErrorCode:(unsigned long long)a0 logString:(id)a1;
- (void)_receivingDataStream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)_receivingMessageStream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)_sendingMessageStream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)_startHandoffStreams;

@end
