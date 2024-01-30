@class NSString, PXUpdater, UILabel;

@interface PXCMMTranscriptTextView : UIView {
    PXUpdater *_updater;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_performLayoutInSize:(struct CGSize { double x0; double x1; })a0 minimizingSize:(BOOL)a1 updateSubviewFrames:(BOOL)a2;
- (void)_updatePrimaryLabel;
- (void)_updateSecondaryLabel;

@end
