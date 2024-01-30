@class NSString, UILabel, UIImageView;

@interface PXCMMTranscriptBubbleFooterView : UIView {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_chevronImageView;
}

@property (class, readonly, nonatomic) double desiredHeight;

@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (nonatomic) BOOL chevronIsHidden;

+ (double)_primaryToSecondaryBaselineSpacing;
+ (double)_topToPrimaryBaselineSpacing;
+ (double)_secondaryBaselineToBottomSpacing;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
