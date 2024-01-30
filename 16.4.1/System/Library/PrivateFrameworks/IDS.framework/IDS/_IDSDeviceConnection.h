@class NSOutputStream, NSString, NSDictionary, NSNumber, NSMutableDictionary, NSInputStream, NSObject;
@protocol OS_dispatch_queue;

@interface _IDSDeviceConnection : NSObject <IDSDaemonListenerProtocol> {
    NSString *_nsuuid;
    NSString *_service;
    NSString *_streamName;
    NSString *_serviceToken;
    NSString *_connectionUUID;
    id /* block */ _openSocketCompletionHandler;
    NSObject<OS_dispatch_queue> *_openSocketCompletionHandlerQueue;
    NSString *_openSocketCompletionHandlerID;
    NSInputStream *_inputStreamForSocket;
    NSOutputStream *_outputStreamForSocket;
    NSNumber *_clientTimeout;
    NSMutableDictionary *_awdMetrics;
    unsigned long long _mtu;
    int _socket;
    BOOL _isDefaultPairedDevice;
    BOOL _hasTimedOut;
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

- (void)_connect;
- (void)_close;
- (void)_daemonDied:(id)a0;
- (void)dealloc;
- (void)xpcObject:(id)a0 objectContext:(id)a1;
- (void)close;
- (void).cxx_destruct;
- (void)_cleanupCompletionBlock;
- (id)deviceConnectionKey;
- (id)initWithDevice:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2 queue:(id)a3;
- (void)setStreamPairWithInputStream:(id)a0 outputStream:(id)a1;
- (BOOL)updateConnectionWithOptions:(id)a0 error:(id *)a1;

@end
