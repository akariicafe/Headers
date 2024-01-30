@class NSString, NSFileHandle, NSObject, NSInputStream;
@protocol OS_dispatch_queue, OS_dispatch_io, OS_dispatch_semaphore;

@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask <NSStreamDelegate> {
    NSInputStream *_requestBodyStream;
    NSInputStream *_initialStream;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSFileHandle *_readHandle;
    NSObject<OS_dispatch_io> *_pipeIO;
    unsigned long long _bytesRead;
    NSObject<OS_dispatch_semaphore> *_streamOpenedSema;
    BOOL _finishedOpen;
    BOOL _openedStreamDuringNeedNewBodyStream;
    BOOL _streamBased;
    id /* block */ _streamWriteCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_onqueue_willSendRequestForEstablishedConnection:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)isKindOfClass:(Class)a0;
- (void)_onqueue_didFinishWithError:(id)a0;
- (id)initWithOriginalRequest:(id)a0 ident:(unsigned long long)a1 taskGroup:(id)a2;
- (void)dealloc;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;

@end
