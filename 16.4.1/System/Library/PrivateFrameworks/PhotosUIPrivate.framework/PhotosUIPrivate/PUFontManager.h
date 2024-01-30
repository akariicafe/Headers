@class UIFont;

@interface PUFontManager : PXObservable

@property (retain, nonatomic) UIFont *albumListTitleLabelFont;
@property (retain, nonatomic) UIFont *albumListSubtitleLabelFont;
@property (retain, nonatomic) UIFont *albumListSectionTitleLabelFont;

- (void)_preferredContentSizeChanged:(id)a0;
- (void)_setNeedsUpdate;
- (void)dealloc;
- (id)mutableChangeObject;
- (id)init;
- (void)invalidateFonts;
- (void).cxx_destruct;

@end
