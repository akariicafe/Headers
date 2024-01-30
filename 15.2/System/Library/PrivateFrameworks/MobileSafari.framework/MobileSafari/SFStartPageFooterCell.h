@class NSString, UIButton, UIAction;

@interface SFStartPageFooterCell : UICollectionViewCell {
    UIButton *_button;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (retain, nonatomic) UIAction *action;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)primaryActionTriggered:(id)a0;

@end
