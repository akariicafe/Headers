@class NSString;

@interface QLDismissAction : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long alertStyle;
@property (nonatomic) BOOL shouldDismissQuickLookAutomatically;

+ (id)actionWithTitle:(id)a0 handler:(id /* block */)a1;
+ (id)actionWithTitle:(id)a0 alertStyle:(long long)a1 shouldDismissQuickLookAutomatically:(BOOL)a2 handler:(id /* block */)a3;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 alertStyle:(long long)a1 shouldDismissQuickLookAutomatically:(BOOL)a2 handler:(id /* block */)a3;

@end
