@class NSString, NSURLRequest, NSHTTPURLResponse;

@interface AAUIRemoteUIController : RemoteUIController

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURLRequest *currentRequest;
@property (retain, nonatomic) NSHTTPURLResponse *redirectResponse;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)loader:(id)a0 didFinishLoadWithError:(id)a1;
- (void)loader:(id)a0 didReceiveHTTPResponse:(id)a1;
- (void)loader:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)loader:(id)a0 willLoadRequest:(id)a1 redirectResponse:(id)a2;
- (void)loader:(id)a0 willLoadRequest:(id)a1 redirectResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)loader:(id)a0 connection:(id)a1 willSendRequest:(id)a2 redirectResponse:(id)a3;
- (void)_loader:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;

@end
