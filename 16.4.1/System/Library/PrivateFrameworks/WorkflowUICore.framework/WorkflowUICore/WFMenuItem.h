@class NSString, WFIcon, UIView;

@interface WFMenuItem : NSObject <WFMenuElement>

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) WFIcon *icon;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL isDestructive;
@property (readonly, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) UIView *customView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCustomView:(id)a0;
- (id)initWithTitle:(id)a0 handler:(id /* block */)a1;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 handler:(id /* block */)a2;
- (id)initWithTitle:(id)a0 icon:(id)a1 isDestructive:(BOOL)a2 handler:(id /* block */)a3;
- (id)initWithTitle:(id)a0 state:(long long)a1 handler:(id /* block */)a2;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2 handler:(id /* block */)a3;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2 state:(long long)a3 handler:(id /* block */)a4;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 state:(long long)a2 handler:(id /* block */)a3;
- (id)initWithTitle:(id)a0 icon:(id)a1 handler:(id /* block */)a2;
- (id)initWithTitle:(id)a0 icon:(id)a1 state:(long long)a2 handler:(id /* block */)a3;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2 state:(long long)a3 isDestructive:(BOOL)a4 handler:(id /* block */)a5;
- (id)menuElementRepresentationShowingStatus:(BOOL)a0;

@end
