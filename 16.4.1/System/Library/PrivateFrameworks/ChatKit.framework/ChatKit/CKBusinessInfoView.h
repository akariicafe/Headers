@class UILabel, CKStandardButton, NSString;
@protocol CKBusinessInfoViewDelegate;

@interface CKBusinessInfoView : UIView

@property (nonatomic) long long layoutType;
@property (retain, nonatomic) UILabel *greetingTextLabel;
@property (retain, nonatomic) UILabel *descriptionTextLabel;
@property (retain, nonatomic) CKStandardButton *infoButton;
@property (readonly, nonatomic) BOOL hasValidGreeting;
@property (weak, nonatomic) id<CKBusinessInfoViewDelegate> delegate;
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) NSString *greetingText;

- (void)setup;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)infoButtonTapped:(id)a0;
- (id)initWithLayoutType:(long long)a0;

@end
