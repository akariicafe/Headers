@class UIButton;

@interface BFFLinkHandler : NSObject

@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (id)init;
- (void)buttonPressed:(id)a0;

@end
