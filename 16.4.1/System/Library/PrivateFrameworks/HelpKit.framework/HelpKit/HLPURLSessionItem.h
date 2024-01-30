@class HLPURLSessionTask, NSString;

@interface HLPURLSessionItem : NSObject <HLPURLSessionTaskDelegate>

@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) long long state;
@property (retain, nonatomic) HLPURLSessionTask *sessionTask;
@property (readonly, nonatomic) id /* block */ completionHanlder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)state;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (void)URLSessionSessionTask:(id)a0 didCompleteWithError:(id)a1;
- (id)initWithSessionTask:(id)a0 completionHandler:(id /* block */)a1;
- (void)notifyWithSessionTask:(id)a0 error:(id)a1;

@end
