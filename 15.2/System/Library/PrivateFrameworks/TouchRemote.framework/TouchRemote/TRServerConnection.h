@class SFService;

@interface TRServerConnection : TRConnection

@property (weak, nonatomic) SFService *service;

- (void)sendEvent:(id)a0;
- (id)initWithService:(id)a0;
- (void)sendResponse:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)sendRequest:(id)a0;

@end
