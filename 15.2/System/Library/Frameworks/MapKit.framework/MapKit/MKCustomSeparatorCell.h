@interface MKCustomSeparatorCell : MKTableViewCell

@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
@property (nonatomic) double leftSeparatorInset;
@property (nonatomic) double rightSeparatorInset;
@property (nonatomic) double leadingSeparatorInset;
@property (nonatomic) double trailingSeparatorInset;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrame;
- (void)_updateSeparatorInset;

@end
