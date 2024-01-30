@class NSLayoutConstraint, NSString, UIImageView, NSDate, _MKUILabel, MKPlaceReviewAvatarGenerator;

@interface MKPlaceReviewsViewCell : MKPlaceSectionRowView {
    UIImageView *_pictureView;
    _MKUILabel *_detailLabel;
    _MKUILabel *_reviewLabel;
    NSLayoutConstraint *_reviewLabelTopConstraint;
    NSLayoutConstraint *_reviewLabelToAuthorLabelConstraint;
    NSLayoutConstraint *_authorLabelBaselineConstraint;
}

@property (nonatomic) unsigned long long rating;
@property (copy, nonatomic) NSString *author;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) BOOL isLastReview;
@property (retain, nonatomic) MKPlaceReviewAvatarGenerator *avatarGenerator;

- (void).cxx_destruct;
- (void)_updatePictureTheme:(id)a0;
- (void)_updateBaselineConstraints;
- (id)detailLabelText;
- (void)infoCardThemeChanged;
- (void)setReviewText:(id)a0;
- (void)setPicture:(id)a0;
- (unsigned long long)maxCharacters;
- (void)setReview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_contentSizeDidChange;

@end
