@interface SUButtonAction : NSObject

@property (readonly, nonatomic, getter=isActivated) BOOL activated;

- (void)_setActivated:(BOOL)a0;
- (void)_buttonAction:(id)a0;

@end
