@class UIFont;

@interface PUFontManager : PXObservable

@property (retain, nonatomic) UIFont *albumListTitleLabelFont;
@property (retain, nonatomic) UIFont *albumListSubtitleLabelFont;
@property (retain, nonatomic) UIFont *albumListSectionTitleLabelFont;

- (id)mutableChangeObject;
- (void)invalidateFonts;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)_preferredContentSizeChanged:(id)a0;
- (void)dealloc;

@end
