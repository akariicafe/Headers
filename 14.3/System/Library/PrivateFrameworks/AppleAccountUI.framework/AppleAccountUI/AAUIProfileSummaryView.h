@class UIImageView, UILabel;

@interface AAUIProfileSummaryView : UIView {
    UIImageView *_profileImageView;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
}

@property (nonatomic) BOOL hidesPhoto;
@property (nonatomic) double topPadding;

+ (double)desiredHeight;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithName:(id)a0 email:(id)a1 image:(id)a2;

@end
