@interface UploadThroughputDelegate : ThroughputDelegate {
    unsigned long long _uploadSize;
}

- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 task:(id)a1 needNewBodyStream:(id /* block */)a2;
- (id)initWithConfiguration:(id)a0 withQueue:(id)a1 testEndpoint:(id)a2 minSessions:(long long)a3 maxSessions:(long long)a4 maxTime:(float)a5 uploadSize:(unsigned long long)a6;
- (id)createTaskWithRequest:(id)a0 session:(id)a1;

@end
