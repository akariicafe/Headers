@class NSString, NSArray, AMSUIWebButtonModel, AMSUIWebAppViewModel;

@interface AMSUIWebNavigationBarModel : NSObject <AMSUIWebModelInterface>

@property (retain, nonatomic) NSString *backButtonTitle;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) BOOL hidesBackButton;
@property (readonly, nonatomic) BOOL includesLeftItems;
@property (readonly, nonatomic) BOOL includesRightItems;
@property (retain, nonatomic) AMSUIWebAppViewModel *leftAppView;
@property (retain, nonatomic) AMSUIWebButtonModel *leftButton;
@property (retain, nonatomic) NSArray *leftButtons;
@property (retain, nonatomic) AMSUIWebAppViewModel *rightAppView;
@property (retain, nonatomic) AMSUIWebButtonModel *rightButton;
@property (retain, nonatomic) NSArray *rightButtons;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)imageForButtonModel:(id)a0;

@end
