@class SBCalendarIconImageProvider;

@interface SBCalendarDownloadingIcon : SBDownloadingIcon <SBCalendarIconImageProviderDelegate>

@property (readonly, nonatomic) SBCalendarIconImageProvider *imageProvider;

+ (BOOL)canGenerateIconsInBackground;

- (void)localeChanged;
- (void).cxx_destruct;
- (void)calendarIconImageProviderHasChanged:(id)a0;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)initWithDownloadingIconDataSource:(id)a0;

@end
