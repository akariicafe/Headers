@class NSString, UILabel, UIImageView;

@interface MPVideoDestinationBackgroundView : UIView {
    UILabel *_destinationSubtitleLabel;
    UILabel *_destinationTitleLabel;
    UIImageView *_videosImageView;
}

@property (copy, nonatomic) NSString *destinationName;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
