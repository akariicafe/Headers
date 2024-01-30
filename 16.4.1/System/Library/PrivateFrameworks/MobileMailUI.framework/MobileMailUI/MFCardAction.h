@class NSString, UIColor;

@interface MFCardAction : NSObject

@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *shortTitle;
@property (nonatomic) BOOL handlerEnabled;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL shouldDismissCardBeforeExecuteHandler;
@property (nonatomic) BOOL shouldDeferDismissHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;

+ (id)cardActionWithTitle:(id)a0 shortTitle:(id)a1 imageName:(id)a2 tintColor:(id)a3 handler:(id /* block */)a4;
+ (id)cardActionWithTitle:(id)a0 shortTitle:(id)a1 imageName:(id)a2 tintColor:(id)a3 handlerEnabled:(BOOL)a4 handler:(id /* block */)a5;

- (void).cxx_destruct;
- (void)executeHandler;
- (void)executeHandlerIfEnabled;

@end
