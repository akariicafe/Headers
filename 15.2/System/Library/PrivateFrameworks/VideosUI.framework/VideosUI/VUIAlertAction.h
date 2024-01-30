@class NSString;

@interface VUIAlertAction : NSObject

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)vui_actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;

@end
