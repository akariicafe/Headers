@class NSString, CAMSemanticStylePicker, CAMSemanticStyleDetailView, NSArray, UIButton, NSLayoutConstraint, UILabel, UIScrollView;
@protocol CAMSemanticStyleSettingsViewDelegate;

@interface CAMSemanticStyleSettingsView : UIView <CAMSemanticStylePickerDelegate, CEKBadgeViewDelegate>

@property (readonly, nonatomic) UIScrollView *_scrollView;
@property (readonly, nonatomic) UILabel *_titleLabel;
@property (readonly, nonatomic) UILabel *_descriptionLabel;
@property (readonly, nonatomic) UIButton *_selectButton;
@property (readonly, nonatomic) CAMSemanticStylePicker *_semanticStylePicker;
@property (readonly, nonatomic) CAMSemanticStyleDetailView *_semanticStyleDetailView;
@property (readonly, nonatomic) NSArray *_semanticStyles;
@property (readonly, nonatomic) NSArray *_semanticStyleBadges;
@property (readonly, nonatomic) NSArray *_semanticStyleImageViews;
@property (retain, nonatomic, setter=_setDescriptionLabelTopConstraint:) NSLayoutConstraint *_descriptionLabelTopConstraint;
@property (nonatomic) BOOL showsTitle;
@property (weak, nonatomic) id<CAMSemanticStyleSettingsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)badgeViewDidChangeIntrinsicContentSize:(id)a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)_handleUseStyleButtonReleased:(id)a0;
- (void)_layoutSemanticStyleMaskedBadgesForContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_previewImageNameForSemanticStylePreset:(long long)a0;
- (void)_updateUIForShowsTitle;
- (void)_updateUIForStyle:(id)a0;
- (void)semanticStylePickerDidChangeSelectedStyle:(id)a0;
- (void)semanticStylePickerDidScroll:(id)a0;

@end
