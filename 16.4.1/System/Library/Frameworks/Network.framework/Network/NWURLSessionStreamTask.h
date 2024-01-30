@class NSURLResponse;

@interface NWURLSessionStreamTask : NWURLSessionTask {
    BOOL _readClosed;
    BOOL _writeClosed;
    NSURLResponse *_storedResponse;
}

- (void)captureStreams;
- (void)closeRead;
- (void)readDataOfMinLength:(unsigned long long)a0 maxLength:(unsigned long long)a1 timeout:(double)a2 completionHandler:(id /* block */)a3;
- (BOOL)isKindOfClass:(Class)a0;
- (void)startSecureConnection;
- (id)response;
- (void)closeWrite;
- (void)writeData:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)loaderBetterPathAvailable;
- (void)startNextLoad;

@end
