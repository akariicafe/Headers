@interface CMFall : NSObject

+ (BOOL)areStatsAvailable;

- (BOOL)setStatsEnabled:(BOOL)a0;
- (unsigned long long)setDataCollectionConfiguration:(unsigned long long)a0;
- (id)sendStatsDataToUrl:(id)a0;
- (void)sendStatsDataToUrl:(id)a0 onCompletion:(id /* block */)a1;
- (void)simulateEvent:(unsigned long long)a0;
- (void)setHgalCaptureMode:(unsigned char)a0;
- (id)fallConfig;

@end
