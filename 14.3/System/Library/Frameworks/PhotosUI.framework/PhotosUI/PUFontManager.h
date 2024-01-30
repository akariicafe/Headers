@class UIFont;

@interface PUFontManager : PXObservable

@property (retain, nonatomic) UIFont *albumListTitleLabelFont;
@property (retain, nonatomic) UIFont *albumListSubtitleLabelFont;
@property (retain, nonatomic) UIFont *albumListSectionTitleLabelFont;

- (id)init;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)invalidateFonts;
- (void)dealloc;
- (id)mutableChangeObject;
- (void)_preferredContentSizeChanged:(id)a0;

@end
