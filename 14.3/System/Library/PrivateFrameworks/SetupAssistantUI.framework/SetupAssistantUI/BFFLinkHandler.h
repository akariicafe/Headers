@class UIButton;

@interface BFFLinkHandler : NSObject

@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ handler;

- (id)init;
- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;

@end
