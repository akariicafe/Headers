@class NSOutputStream, NSString, NSURLSessionStreamTask, NSInputStream, NSObject;
@protocol OS_dispatch_queue;

@interface NSProxyConnectionStreamTask : NSProxyConnection <NSStreamDelegate, NSURLSessionStreamDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isConnected;
    NSString *_host;
    int _port;
    BOOL _dataAvailableForReading;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSURLSessionStreamTask *_streamTask;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)URLSession:(id)a0 streamTask:(id)a1 didBecomeInputStream:(id)a2 outputStream:(id)a3;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0 port:(unsigned short)a1 queue:(id)a2 configuration:(id)a3;
- (void)read:(unsigned long long)a0 handler:(id /* block */)a1;
- (void)write:(id)a0 handler:(id /* block */)a1;

@end
