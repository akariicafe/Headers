@class NSOutputStream, NSString, NSDictionary, NSNumber, NSMutableDictionary, NSInputStream, NSObject;
@protocol OS_dispatch_queue;

@interface _IDSDeviceConnection : NSObject <IDSDaemonListenerProtocol> {
    NSString *_nsuuid;
    BOOL _isDefaultPairedDevice;
    NSString *_service;
    NSString *_streamName;
    NSString *_serviceToken;
    NSString *_connectionUUID;
    int _socket;
    unsigned long long _mtu;
    id /* block */ _openSocketCompletionHandler;
    NSObject<OS_dispatch_queue> *_openSocketCompletionHandlerQueue;
    NSString *_openSocketCompletionHandlerID;
    NSInputStream *_inputStreamForSocket;
    NSOutputStream *_outputStreamForSocket;
    BOOL _hasTimedOut;
    NSNumber *_clientTimeout;
    NSMutableDictionary *_awdMetrics;
}

@property (readonly, nonatomic) int socket;
@property (readonly, nonatomic) unsigned long long mtu;
@property (readonly, nonatomic) NSDictionary *metrics;
@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)_close;
- (void)_daemonDied:(id)a0;
- (void)_connect;
- (void).cxx_destruct;
- (id)deviceConnectionKey;
- (void)_cleanupCompletionBlock;
- (id)initWithDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 queue:(id)a3;
- (void)setStreamPairWithInputStream:(id)a0 outputStream:(id)a1;
- (BOOL)updateConnectionWithOptions:(id)a0 error:(id *)a1;
- (void)xpcObject:(id)a0 objectContext:(id)a1;
- (void)dealloc;

@end
