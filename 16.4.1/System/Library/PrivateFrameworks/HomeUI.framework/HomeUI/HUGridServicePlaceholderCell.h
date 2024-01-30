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

- (id)iconView;
- (id)activityIndicator;
- (void)layoutSubviews;
- (void)setIconView:(id)a0;
- (void)setActivityIndicator:(id)a0;
- (void).cxx_destruct;
- (id)serviceTextView;
- (void)_setupServiceCell;
- (id)_textConfiguration;
- (void)_updateSecondaryContentDisplayStyle;
- (id)coloredDescriptionLabel;
- (id)descriptionLabelEffectView;
- (void)displayStyleDidChange;
- (unsigned long long)iconDisplayStyle;
- (void)setColoredDescriptionLabel:(id)a0;
- (void)setDescriptionLabelEffectView:(id)a0;
- (void)setServiceTextView:(id)a0;
- (void)setShouldShowRoomName:(BOOL)a0;
- (void)setShowingUpdatingState:(BOOL)a0;
- (BOOL)shouldShowRoomName;
- (BOOL)showingUpdatingState;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
