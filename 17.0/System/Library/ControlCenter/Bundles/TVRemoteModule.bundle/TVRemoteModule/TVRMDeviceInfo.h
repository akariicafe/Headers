@interface TVRMDeviceInfo : NSObject

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentEdgeInsets;
+ (double)compactRoundedCornerRadius;
+ (BOOL)deviceHasRoundedCorners;
+ (double)expandedRoundedCornerRadius;
+ (double)heightForCurrentDeviceWithOrientation:(long long)a0;
+ (BOOL)needsCompactLayoutForCurrentDevice;
+ (BOOL)needsLandscapeOrientationForCurrentDevice;
+ (double)widthForCurrentDevice;

@end
