@class NSDictionary, AXUIAlertContext;

@interface AXUIAlert : UIView

@property (weak, nonatomic) AXUIAlertContext *context;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)alertWithType:(unsigned long long)a0 text:(id)a1 subtitleText:(id)a2 iconImage:(id)a3 styleProvider:(id)a4 userInfo:(id)a5;

- (void).cxx_destruct;
- (void)addToContainerView:(id)a0;

@end
