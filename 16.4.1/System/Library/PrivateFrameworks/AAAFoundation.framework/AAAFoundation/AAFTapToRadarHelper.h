@interface AAFTapToRadarHelper : NSObject

- (unsigned long long)_adjustedOptionFlags:(unsigned long long)a0;
- (void)_launchTTRWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)_notificationDictionaryForRequest:(id)a0;
- (void)_showAlertForRequest:(id)a0 completion:(id /* block */)a1;
- (void)handleRadarRequest:(id)a0 completion:(id /* block */)a1;
- (void)silentTapToRadarWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)tapToRadarWithRequest:(id)a0 completion:(id /* block */)a1;

@end
