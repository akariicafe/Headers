@class NSString;

@interface SLNetworkReachabilityWarning : NSObject {
    id /* block */ _completionHandler;
    NSString *_serviceType;
}

- (id)initWithServiceType:(id)a0;
- (void).cxx_destruct;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)showIfNecessaryWithCompletion:(id /* block */)a0;
- (void)showIfNecessary;

@end
