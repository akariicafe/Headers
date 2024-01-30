@class NSString, NSDictionary;

@interface VUIAlertAction : NSObject

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) NSDictionary *metrics;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)vui_actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;
+ (id)vui_actionWithTitle:(id)a0 style:(long long)a1 metrics:(id)a2 handler:(id /* block */)a3;

- (void).cxx_destruct;

@end
