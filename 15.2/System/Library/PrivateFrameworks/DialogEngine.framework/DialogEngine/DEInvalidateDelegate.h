@class NSString, NSURLSession;

@interface DEInvalidateDelegate : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSString *distribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;

@end
