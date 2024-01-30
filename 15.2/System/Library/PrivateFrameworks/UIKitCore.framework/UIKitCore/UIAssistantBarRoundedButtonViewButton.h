@class UIColor;

@interface UIAssistantBarRoundedButtonViewButton : UIButton

@property (retain, nonatomic) UIColor *normalBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (retain, nonatomic) UIColor *normalTitleColor;
@property (retain, nonatomic) UIColor *highlightedTitleColor;

- (void)setHighlighted:(BOOL)a0;
- (id)_currentTitleColor;
- (void)_updateBackgroundAndTitleColor;
- (id)_titleColorForState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
