@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;

@interface WLSocketHandler : NSObject {
    NSObject<OS_dispatch_queue> *_readQueue;
    NSMutableArray *_dataCache;
    NSObject<OS_dispatch_source> *_dataCacheReadSource;
    NSObject<OS_dispatch_semaphore> *_dataCacheSema;
}

+ (int)connectToHost:(id)a0 address:(struct hostent { char *x0; char **x1; int x2; int x3; char **x4; } *)a1 port:(unsigned short)a2;
+ (void)performDNSLookupForHost:(id)a0 completion:(id /* block */)a1;
+ (void)lookupAndConnectToHost:(id)a0 port:(unsigned short)a1 completion:(id /* block */)a2;
+ (id)_commandStringWithData:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)endReadingIntoCache;
- (void)_readIntoCacheFromSocket:(int)a0;
- (id)observeSocket:(int)a0 forSourceEventType:(struct dispatch_source_type_s { } *)a1 handler:(id /* block */)a2;
- (char *)readBytesFromSocket:(int)a0 maximumSize:(unsigned long long)a1 bytesRead:(long long *)a2;
- (id)waitForDataFromReadCacheReturningError:(id *)a0;
- (id)waitForMessageFromReadCacheReturningError:(id *)a0;
- (void)_writeBytes:(const void *)a0 offset:(unsigned long long)a1 length:(unsigned long long)a2 toSocket:(int)a3 completion:(id /* block */)a4;
- (void)writeBytes:(const void *)a0 length:(unsigned long long)a1 toSocket:(int)a2 completion:(id /* block */)a3;
- (void)beginReadingIntoCacheFromSocket:(int)a0;
- (id)waitForBlobDataFromReadCacheReturningError:(id *)a0;
- (BOOL)waitForCommand:(id)a0 fromReadCacheReturningError:(id *)a1;
- (void)sendCommand:(id)a0 toSocket:(int)a1 completion:(id /* block */)a2;
- (void)sendData:(id)a0 toSocket:(int)a1 completion:(id /* block */)a2;

@end
