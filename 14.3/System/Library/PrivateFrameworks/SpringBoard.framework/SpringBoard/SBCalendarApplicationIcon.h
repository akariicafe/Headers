@class SBCalendarIconImageProvider;

@interface SBCalendarApplicationIcon : SBApplicationIcon <SBCalendarIconImageProviderDelegate> {
    SBCalendarIconImageProvider *_imageProvider;
}

+ (Class)downloadingIconClass;
+ (BOOL)canGenerateIconsInBackground;

- (id)initWithApplication:(id)a0;
- (void)_boldTextStatusDidChange:(id)a0;
- (void)localeChanged;
- (void).cxx_destruct;
- (void)dealloc;
- (void)calendarIconImageProviderHasChanged:(id)a0;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;

@end
