@class NSString;

@interface TVRUIHintsStylePhone : TVRUIHintsStyle <TVRUIHintsStyleProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)userInterfaceStyle;
- (id)backgroundColor;
- (double)animationDuration;
- (id)backgroundFilters;
- (id)primaryTintColor;
- (double)imageMargin;
- (double)animationPresentationDelay;
- (BOOL)shouldShowSiriHint;
- (BOOL)shouldShowVolumeHint;
- (double)buttonOutlineWidth;
- (id)siriImage;
- (double)volumeHintContainerWidth;
- (id)volumeImage;
- (double)siriHintContainerWidth;
- (id)siriHintTipContext;
- (double)preferredTipWidth;
- (double)maximumSymbolPointSize;

@end
