@class HUGridServiceCellTextView, HUIconView, UIActivityIndicatorView, UIVisualEffectView, UILabel;

@interface HUGridServicePlaceholderCell : HUGridServiceCell {
    BOOL _shouldShowRoomName;
    BOOL _showingUpdatingState;
    HUGridServiceCellTextView *_serviceTextView;
    UIVisualEffectView *_descriptionLabelEffectView;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_coloredDescriptionLabel;
    HUIconView *_iconView;
}

- (void)layoutSubviews;
- (id)iconView;
- (void)setIconView:(id)a0;
- (void).cxx_destruct;
- (void)setActivityIndicator:(id)a0;
- (id)activityIndicator;
- (void)updateUIWithAnimation:(BOOL)a0;
- (void)setShouldShowRoomName:(BOOL)a0;
- (void)displayStyleDidChange;
- (void)_updateSecondaryContentDisplayStyle;
- (void)_setupServiceCell;
- (unsigned long long)iconDisplayStyle;
- (id)serviceTextView;
- (id)_textConfiguration;
- (void)setServiceTextView:(id)a0;
- (id)descriptionLabelEffectView;
- (void)setDescriptionLabelEffectView:(id)a0;
- (BOOL)shouldShowRoomName;
- (id)coloredDescriptionLabel;
- (void)setColoredDescriptionLabel:(id)a0;
- (BOOL)showingUpdatingState;
- (void)setShowingUpdatingState:(BOOL)a0;

@end
