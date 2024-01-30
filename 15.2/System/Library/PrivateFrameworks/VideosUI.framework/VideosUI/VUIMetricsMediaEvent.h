@interface VUIMetricsMediaEvent : NSObject

+ (id)_metricsDataFromTVPMediaItem:(id)a0 isBackground:(BOOL)a1 isAmbient:(BOOL)a2;
+ (id)clickMetricsDataFromTVPMediaItem:(id)a0;
+ (id)impressionsMetricsDataFromTVPMediaItem:(id)a0;
+ (void)recordPlay:(id)a0 isLaunchingExtras:(BOOL)a1;
+ (void)recordPunchout:(id)a0 isUrlForPlay:(BOOL)a1;
+ (void)recordBGVideoPlayOfTVPMediaItem:(id)a0 isAmbient:(BOOL)a1;
+ (void)recordPlayOfTVPMediaItem:(id)a0;
+ (void)recordClickOfSkipInfo:(id)a0 onMediaItem:(id)a1;
+ (void)recordImpressionsOfSkipButton:(id)a0 onMediaItem:(id)a1;
+ (id)generateSkipImpressionsFromSkipInfo:(id)a0;

@end
