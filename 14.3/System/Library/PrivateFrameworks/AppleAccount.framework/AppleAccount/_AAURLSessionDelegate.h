@class NSString;
@protocol NSURLSessionDataDelegate, NSURLSessionTaskDelegate, NSURLSessionDelegate;

@interface _AAURLSessionDelegate : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate>

@property (weak, nonatomic) id<NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)initWithDelegate:(id)a0;

@end
