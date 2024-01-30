@class NSObject, NSString, SYCompressedFileInputStream, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _SYInputStreamer : NSObject <NSStreamDelegate, _SYStreamPropertyProxying> {
    SYCompressedFileInputStream *_stream;
    NSMutableArray *_items;
    id /* block */ _onComplete;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void).cxx_destruct;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)_completeAllItemsWithError:(id)a0;
- (void)setStreamProperty:(id)a0 forKey:(id)a1;
- (id)streamPropertyForKey:(id)a0;
- (id)initWithCompressedFileURL:(id)a0 callbackQueue:(id)a1;
- (void)whenComplete:(id /* block */)a0;
- (void)_tryToReadData;
- (void)readDataOfLength:(unsigned long long)a0 completion:(id /* block */)a1;

@end
