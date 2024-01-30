@interface CAMShutterUtilities : NSObject

+ (BOOL)isStopMode:(long long)a0;
+ (BOOL)shouldUseTimelapseOuterViewForMode:(long long)a0;
+ (BOOL)shouldUseImageViewForMode:(long long)a0;
+ (id)spinnerAnimation;
+ (id)spinnerViewForLayoutStyle:(long long)a0;

@end
