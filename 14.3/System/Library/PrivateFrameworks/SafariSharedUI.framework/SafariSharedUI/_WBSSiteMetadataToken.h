@class NSTimer, WBSSiteMetadataRequest;

@interface _WBSSiteMetadataToken : NSObject

@property (getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) BOOL isOneTimeRequest;
@property (readonly, nonatomic) WBSSiteMetadataRequest *request;
@property (nonatomic) long long priority;
@property (readonly, copy, nonatomic) id /* block */ responseHandler;
@property (retain, nonatomic) NSTimer *delayTimer;
@property (nonatomic) BOOL didReceiveResponse;

- (id)initWithOneTimeRequest:(id)a0 priority:(long long)a1 responseHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRequest:(id)a0 priority:(long long)a1 responseHandler:(id /* block */)a2;
- (void)dispatchResponse:(id)a0;

@end
