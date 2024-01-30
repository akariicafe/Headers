@class SFService;

@interface TRServerConnection : TRConnection

@property (weak, nonatomic) SFService *service;

- (void)sendResponse:(id)a0;
- (id)initWithService:(id)a0;
- (void)sendEvent:(id)a0;
- (void)sendRequest:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
