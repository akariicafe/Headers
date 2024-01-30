@protocol HFApplicationURLHandling;

@interface HFOpenURLRouter : NSObject

@property (class, readonly, nonatomic) HFOpenURLRouter *sharedInstance;

@property (weak, nonatomic) id<HFApplicationURLHandling> applicationURLHandler;

- (id)openURL:(id)a0;
- (void).cxx_destruct;
- (id)openSensitiveURL:(id)a0;
- (void)_sendAnalyticsEventForURL:(id)a0;

@end
