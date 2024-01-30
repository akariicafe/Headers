@class NSString, UIColor, UIVisualEffect;

@interface UITableViewRowAction : NSObject <NSCopying>

@property (readonly, nonatomic, getter=_handler) id /* block */ handler;
@property (readonly, nonatomic) long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIVisualEffect *backgroundEffect;

+ (id)rowActionWithStyle:(long long)a0 title:(id)a1 handler:(id /* block */)a2;

- (id)_button;
- (void).cxx_destruct;
- (id)_initWithStyle:(long long)a0 title:(id)a1 handler:(id /* block */)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setButton:(id)a0;

@end
