@interface DownloadThroughputDelegate : ThroughputDelegate

- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)createTaskWithRequest:(id)a0 session:(id)a1;

@end
