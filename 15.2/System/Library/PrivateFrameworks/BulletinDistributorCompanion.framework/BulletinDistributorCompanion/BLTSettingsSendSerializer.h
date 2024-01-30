@class BLTSendQueueSerializer, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BLTSettingsSendSerializer : BLTSettingsSendSerializerPassthrough {
    NSObject<OS_dispatch_queue> *_queue;
    BLTSendQueueSerializer *_queueSerializer;
    NSMutableArray *_completionHandlers;
    NSMutableDictionary *_ackHandlers;
    id /* block */ _acknowledgementBlock;
    unsigned long long _ackHandlerCount;
    unsigned long long _responseCount;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleFileURL:(id)a0;
- (void)sendRequest:(id)a0 type:(unsigned short)a1 withTimeout:(id)a2 withDescription:(id)a3 onlyOneFor:(id)a4 didSend:(id /* block */)a5 andResponse:(id /* block */)a6 spoolToFile:(BOOL)a7;
- (void)sendNowWithSent:(id /* block */)a0 withAcknowledgement:(id /* block */)a1 withTimeout:(id)a2;

@end
