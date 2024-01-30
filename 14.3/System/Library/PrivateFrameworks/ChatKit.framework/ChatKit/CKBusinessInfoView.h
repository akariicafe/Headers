@class UILabel, CKStandardButton, NSString;
@protocol CKBusinessInfoViewDelegate;

@interface CKBusinessInfoView : UIView

@property (nonatomic) long long layoutType;
@property (retain, nonatomic) UILabel *descriptionTextLabel;
@property (retain, nonatomic) CKStandardButton *infoButton;
@property (weak, nonatomic) id<CKBusinessInfoViewDelegate> delegate;
@property (retain, nonatomic) NSString *descriptionText;

- (void)setup;
- (void).cxx_destruct;
- (id)initWithLayoutType:(long long)a0;
- (void)layoutSubviews;
- (void)infoButtonTapped:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
