@class UIColor;

@interface UIAssistantBarRoundedButtonViewButton : UIButton

@property (retain, nonatomic) UIColor *normalBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (retain, nonatomic) UIColor *normalTitleColor;
@property (retain, nonatomic) UIColor *highlightedTitleColor;

- (void).cxx_destruct;
- (void)_updateBackgroundAndTitleColor;
- (id)_currentTitleColor;
- (id)_titleColorForState:(unsigned long long)a0;
- (void)setHighlighted:(BOOL)a0;

@end
