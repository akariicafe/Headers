@class WFAlert, NSArray, NSString;

@interface WFAlertButton : NSObject

@property (readonly, copy, nonatomic) id /* block */ handler;
@property (weak, nonatomic) WFAlert *alert;
@property (copy, nonatomic) NSArray *alternativeSpeakableMatches;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic, getter=isPreferred) BOOL preferred;

+ (id)buttonWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
+ (id)buttonWithTitle:(id)a0 style:(long long)a1 preferred:(BOOL)a2 handler:(id /* block */)a3;
+ (id)cancelButtonWithHandler:(id /* block */)a0;
+ (id)cancelButtonWithTarget:(id)a0 action:(SEL)a1;
+ (id)okButtonWithHandler:(id /* block */)a0;
+ (id)okButtonWithTarget:(id)a0 action:(SEL)a1;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2 preferred:(BOOL)a3;

@end
