@interface CPLSyncIndicator : NSObject

+ (void)setForeground:(BOOL)a0;
+ (void)_doProtected:(id /* block */)a0;
+ (void)_reallyShowSyncIndicator;
+ (void)_reallyHideSyncIndicator;
+ (void)showSyncIndicator;
+ (void)hideSyncIndicator;

@end
