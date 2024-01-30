@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object, HAPNFCReaderStream;

@interface HAPNFCReaderXPC : HMFObject

@property (retain) NSString *stream;
@property unsigned long long source;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSObject<OS_xpc_object> *event;
@property (retain) id<HAPNFCReaderStream> readerStream;
@property (readonly, nonatomic) BOOL supportsBackgroundReading;

- (void).cxx_destruct;
- (void)beginSession;
- (id)initReaderWithStream:(id)a0 fromSource:(unsigned long long)a1 workQueue:(id)a2 readerStream:(id)a3;

@end
