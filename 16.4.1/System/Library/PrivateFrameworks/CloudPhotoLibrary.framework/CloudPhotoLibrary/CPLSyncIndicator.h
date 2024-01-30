@interface CPLSyncIndicator : NSObject

+ (void)setForeground:(BOOL)a0;
+ (void)_reallyHideSyncIndicator;
+ (void)showSyncIndicator;
+ (void)hideSyncIndicator;
+ (void)_reallyShowSyncIndicator;
+ (void)_doProtected:(id /* block */)a0;

@end
