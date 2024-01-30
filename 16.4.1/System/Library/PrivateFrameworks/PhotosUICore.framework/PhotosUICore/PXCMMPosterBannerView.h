@class NSString, NSArray, UIVisualEffectView, UILabel, PXUpdater, PXCapsuleButton;

@interface PXCMMPosterBannerView : UIView {
    struct _NSRange { unsigned long long location; unsigned long long length; } _headlineBoldRange;
    PXCapsuleButton *_actionButton;
    NSString *_actionButtonTitle;
    id /* block */ _actionButtonAction;
    UILabel *_headlineLabel;
    UILabel *_subheadlineLabel;
    UIVisualEffectView *_visualEffectView;
    PXUpdater *_updater;
}

@property (copy, nonatomic) NSString *headline;
@property (copy, nonatomic) NSString *subheadline;
@property (copy, nonatomic) NSArray *localizedNamesForHeadline;
@property (nonatomic) BOOL containsUnverifiedPersons;
@property (nonatomic, getter=isLoadingPeopleSuggestions) BOOL loadingPeopleSuggestions;
@property (nonatomic, getter=isAddingPhotos) BOOL addingPhotos;

+ (id)_headlineLabelBoldFont;
+ (id)_headlineLabelFont;
+ (id)_subheadlineLabelFont;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (void)willMoveToWindow:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_actionButtonTapped:(id)a0;
- (void)_updateActionButton;
- (void)_updateTitles;
- (void)_updateLoadingPeopleSuggestions;
- (id)_actionButtonWithTitle:(id)a0 action:(SEL)a1 enabled:(BOOL)a2;
- (id)_attributedStringWithString:(id)a0 boldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_headlineStringAttributes;
- (void)setActionButtonWithTitle:(id)a0 actionBlock:(id /* block */)a1;
- (void)setHeadline:(id)a0 boldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
