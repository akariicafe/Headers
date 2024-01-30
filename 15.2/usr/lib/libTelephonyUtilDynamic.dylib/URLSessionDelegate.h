@class NSString;

@interface URLSessionDelegate : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {
    struct map<unsigned long, std::shared_ptr<SessionTaskContext>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<SessionTaskContext>>>> { struct __tree<std::__value_type<unsigned long, std::shared_ptr<SessionTaskContext>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<SessionTaskContext>>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<SessionTaskContext>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<SessionTaskContext>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<SessionTaskContext>>, std::less<unsigned long>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } fTaskHandlers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 task:(id)a1 didSendBodyData:(long long)a2 totalBytesSent:(long long)a3 totalBytesExpectedToSend:(long long)a4;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)dealloc;
- (id).cxx_construct;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (struct shared_ptr<SessionTaskContext> { struct SessionTaskContext *x0; struct __shared_weak_count *x1; })getContext:(long long)a0;
- (void)removeCallbackFor:(long long)a0;
- (void)addCallbackHandler:(struct shared_ptr<ctu::Http::HttpRequestCallbackHandler> { struct HttpRequestCallbackHandler *x0; struct __shared_weak_count *x1; })a0 for:(long long)a1;

@end
