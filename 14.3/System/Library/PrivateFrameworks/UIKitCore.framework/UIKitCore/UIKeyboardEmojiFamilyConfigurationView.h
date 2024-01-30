@class UIStackView, NSString, NSArray, UIView, UIKBTree, UIKeyboardEmojiWellView, NSMutableArray, NSIndexPath;

@interface UIKeyboardEmojiFamilyConfigurationView : UIView <UIKBKeyViewContentView> {
    double _metachronalRhythmAnimationStartTime;
}

@property (nonatomic) BOOL usesDarkStyle;
@property (retain, nonatomic) NSMutableArray *familyMemberStackViews;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIStackView *previewWellStackView;
@property (retain, nonatomic) UIKeyboardEmojiWellView *neutralWellView;
@property (retain, nonatomic) UIKeyboardEmojiWellView *configuredWellView;
@property (retain, nonatomic) NSIndexPath *lastSelectedIndexPath;
@property (retain, nonatomic) NSString *baseEmojiString;
@property (retain, nonatomic) NSMutableArray *selectedVariantIndices;
@property (retain, nonatomic) NSArray *skinToneVariantRows;
@property (retain, nonatomic) UIKBTree *representedKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })preferredContentViewSizeForKey:(id)a0 withTraits:(id)a1;
+ (id)_selectionAndSeparatorColorForDarkMode:(BOOL)a0;

- (void).cxx_destruct;
- (void)retestSelectedVariantIndexForKey:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updateForKeyplane:(id)a0 key:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureFamilyMemberWellStackViews;
- (void)_updatePreviewWellForCurrentSelection;
- (id)_wellViewForSection:(long long)a0 item:(long long)a1;
- (void)_updateBottomRowForSelections:(id)a0;
- (id)_currentlySelectedSkinToneConfiguration;
- (BOOL)_hasCompletelyConfiguredSkinToneConfiguration;
- (void)_colorConfigurationDidChange;
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateReferencedKeySelectedVariantIndexBasedOnCurrentConfiguration;
- (void)_beginFamilyMetachronalRhythmAnimation;
- (void)_configureSkinToneVariantSpecifiersForBaseString:(id)a0;
- (void)_setCurrentlySelectedSkinToneConfiguration:(id)a0;
- (void)updateRenderConfig:(id)a0;

@end
