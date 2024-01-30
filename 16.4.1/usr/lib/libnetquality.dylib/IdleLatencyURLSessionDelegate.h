@interface IdleLatencyURLSessionDelegate : LatencyURLSessionDelegate

- (void)URLSession:(id)a0 task:(id)a1 didFinishCollectingMetrics:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)executeTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
