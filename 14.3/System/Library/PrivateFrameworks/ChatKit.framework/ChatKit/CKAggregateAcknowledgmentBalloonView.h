@class CKGradientView, UIImageView, UIView;
@protocol CKGradientReferenceView;

@interface CKAggregateAcknowledgmentBalloonView : CKAcknowledgmentBalloonView {
    CKGradientView *_gradientView;
    UIImageView *_backgroundView;
    UIImageView *_solidPartsView;
}

@property (weak, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (nonatomic) char gradientColor;
@property (nonatomic) char solidColor;

+ (id)_middleBubbleSquareImageWithTraitCollection:(id)a0;
+ (id)_topBubbleSquareImageWithTraitCollection:(id)a0;

- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureForAggregateAcknowledgmentChatItem:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
