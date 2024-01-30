@class UIButton, UILabel, UIImageView;

@interface CKMessageEntryAudioHintView : UIView

@property (retain, nonatomic) UIButton *referenceButton;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } coverInsets;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *hintImageView;
@property (retain, nonatomic) UIButton *hintButton;
@property (nonatomic) BOOL shouldAnimateReferenceButton;

- (void)layoutSubviews;
- (id)initWithReferenceButton:(id)a0 coverInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
