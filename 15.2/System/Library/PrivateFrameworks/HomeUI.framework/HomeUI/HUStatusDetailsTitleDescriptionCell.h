@class UITextView, NSArray, NSString, HUGridLayoutOptions, UILabel;
@protocol HFStringGenerator;

@interface HUStatusDetailsTitleDescriptionCell : UICollectionViewCell <UITextViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *descriptionTextView;
@property (retain, nonatomic) NSArray *labelConstraints;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (copy, nonatomic) id<HFStringGenerator> titleText;
@property (copy, nonatomic) id<HFStringGenerator> descriptionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)_layoutContentApplyingFrames:(BOOL)a0 forTargetSize:(struct CGSize { double x0; double x1; })a1 desiredSize:(out struct CGSize { double x0; double x1; } *)a2;

@end
