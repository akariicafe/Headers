@class NSString, NSDictionary, NSURLResponse, NSMutableData, NSError;

@interface AMSupportURLConnectionDelegate : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {
    BOOL requestComplete;
    NSDictionary *options;
    NSURLResponse *response;
}

@property (readonly, nonatomic) NSMutableData *data;
@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 willSendRequestForAuthenticationChallenge:(id)a1;
- (id)init;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)dealloc;
- (id)initWithData:(id)a0 Options:(id)a1;
- (id)waitForResponseOrError:(id *)a0;

@end
