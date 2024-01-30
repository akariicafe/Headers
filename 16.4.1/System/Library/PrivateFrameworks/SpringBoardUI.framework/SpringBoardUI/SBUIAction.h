@class NSString, UIImage, UIView;

@interface SBUIAction : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) UIView *badgeView;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 handler:(id /* block */)a1;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 handler:(id /* block */)a2;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 badgeView:(id)a3 handler:(id /* block */)a4;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2 handler:(id /* block */)a3;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 systemImageName:(id)a2 badgeView:(id)a3 handler:(id /* block */)a4;

@end
