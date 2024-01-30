@interface TRNetworkOperation : TROperation

@property (copy, nonatomic) id /* block */ sendingWiFiInfoHandler;

- (void)execute;
- (void).cxx_destruct;
- (void)_handleResponse:(id)a0;
- (void)_sendRequestWithSSID:(id)a0 password:(id)a1;

@end
