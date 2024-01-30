@class UIImage, NSMutableArray;

@interface MKStarRatingView : UIView {
    double _padding;
    NSMutableArray *_ratingViews;
    long long _numReviews;
}

@property (nonatomic) unsigned long long numberOfRatingLevels;
@property (nonatomic) double rating;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) UIImage *fullStarImage;
@property (retain, nonatomic) UIImage *halfStarImage;
@property (retain, nonatomic) UIImage *emptyStarImage;
@property (retain, nonatomic) UIImage *fullStarHighlightedImage;
@property (retain, nonatomic) UIImage *halfStarHighlightedImage;
@property (retain, nonatomic) UIImage *emptyStarHighlightedImage;
@property (nonatomic) long long starStyle;

+ (id)colorForRating:(double)a0;
+ (id)fullStarTextAttachmentWithFont:(id)a0;
+ (id)halfStarTextAttachmentWithFont:(id)a0;
+ (id)emptyStarTextAttachmentWithFont:(id)a0;
+ (id)ratingAsAttributedString:(double)a0 baseFont:(id)a1 style:(long long)a2 theme:(id)a3;
+ (id)ratingShortAsAttributedString:(double)a0 baseFont:(id)a1 theme:(id)a2;
+ (id)textAttachmentimageNamed:(id)a0 font:(id)a1;

- (void)_commonInit;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setPadding:(double)a0;
- (void).cxx_destruct;
- (void)_layoutStarViewsCreatingIfNeeded:(BOOL)a0;
- (id)imageWithName:(id)a0 andColor:(id)a1;
- (double)verticalAlignmentCenterPercentage;

@end
