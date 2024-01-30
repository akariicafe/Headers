@interface _SFSiteIcon : NSObject

+ (long long)_defaultIconSize;
+ (id)defaultIconKeyColor;
+ (struct CGSize { double x0; double x1; })sizeForIconSize:(long long)a0;
+ (double)fontPointSizeForIconSize:(long long)a0;
+ (double)cornerRadius;
+ (id)defaultGlyph;
+ (struct CGSize { double x0; double x1; })defaultSize;
+ (id)precompositedDefaultIcon;
+ (struct CGSize { double x0; double x1; })minimumAcceptableSizeForDownloadedIcon;

@end
