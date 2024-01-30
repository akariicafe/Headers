@class SBCalendarIconImageProvider;

@interface SBHCalendarApplicationIcon : SBHApplicationIcon <SBCalendarIconImageProviderDelegate>

@property (readonly, nonatomic) SBCalendarIconImageProvider *imageProvider;

+ (BOOL)canGenerateIconsInBackground;

- (void)localeChanged;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)initWithLeafIdentifier:(id)a0 applicationBundleID:(id)a1;
- (void)_boldTextStatusDidChange:(id)a0;
- (void)calendarIconImageProviderHasChanged:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
