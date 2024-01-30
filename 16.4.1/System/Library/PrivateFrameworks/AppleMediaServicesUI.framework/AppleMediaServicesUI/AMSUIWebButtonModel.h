@class NSDictionary, NSString, AMSUIWebActivityIndicatorModel;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebButtonModel : NSObject <AMSUIWebModelInterface>

@property (retain, nonatomic) NSDictionary *underlyingJSObject;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) id<AMSUIWebActionRunnable> action;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) AMSUIWebActivityIndicatorModel *activityIndicator;
@property (nonatomic) BOOL bold;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *keyEquivalent;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *systemImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)_barButtonItemStyle;
- (void).cxx_destruct;
- (id)_createProxCardItemWithActionBlock:(id /* block */)a0;
- (id)_createSpinnerItem;
- (id)_imageForButtonWithNavStyle:(long long)a0;
- (id)createBarButtonItemWithNavigationBarModel:(id)a0 actionBlock:(id /* block */)a1;
- (id)createDialogAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
