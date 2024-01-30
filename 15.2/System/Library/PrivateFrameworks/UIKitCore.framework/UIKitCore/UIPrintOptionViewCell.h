@class UIView;
@protocol UIPrintOptionViewDelegate;

@interface UIPrintOptionViewCell : UIPrintOptionCell

@property (weak, nonatomic) id<UIPrintOptionViewDelegate> optionViewDelegate;
@property (retain, nonatomic) UIView *printOptionView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)printOptionCellTapped;

@end
