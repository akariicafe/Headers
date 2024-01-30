@class NSString, UIVisualEffectView, UILayoutGuide, UILabel, UIButton;

@interface SFPrivacyReportBannerCell : UICollectionViewCell <UITextViewDelegate> {
    UILabel *_numberOfTrackersLabel;
    UILabel *_captionLabel;
    UIVisualEffectView *_backgroundEffectView;
    unsigned long long _action;
    UIButton *_actionButton;
    UILayoutGuide *_textLayoutGuide;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (nonatomic) long long numberOfTrackers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateVibrancy;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateState;
- (void)_actionButtonTapped:(id)a0;
- (void)_privacyProxyAvailabilityChanged:(id)a0;
- (void)_removeActionButton;
- (void)_setAction:(unsigned long long)a0 text:(id)a1;

@end
