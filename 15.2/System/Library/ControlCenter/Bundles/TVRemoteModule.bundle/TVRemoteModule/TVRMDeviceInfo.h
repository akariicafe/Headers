@interface TVRMDeviceInfo : NSObject

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsets;
+ (double)compactRoundedCornerRadius;
+ (BOOL)needsLandscapeOrientationForCurrentDevice;
+ (double)expandedRoundedCornerRadius;
+ (BOOL)needsCompactLayoutForCurrentDevice;
+ (BOOL)deviceHasRoundedCorners;
+ (double)heightForCurrentDeviceWithOrientation:(long long)a0;
+ (double)widthForCurrentDevice;

@end
