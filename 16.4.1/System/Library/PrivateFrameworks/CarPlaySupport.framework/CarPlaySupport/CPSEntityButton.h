@class CPButton;

@interface CPSEntityButton : CPSActionButton

@property (readonly, nonatomic) CPButton *entityButton;

+ (id)buttonWithEntityButton:(id)a0;

- (void).cxx_destruct;
- (id)CPSButtonTitleForButton:(id)a0;
- (id)CPSButtonImageForButton:(id)a0;
- (void)setEntityButton:(id)a0;

@end
