@class NSString, AMSUIWebClientContext;

@interface AMSUIWebNavigationBarModel : NSObject <AMSUIWebModelInterface>

@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (retain, nonatomic) id leftButtonObj;
@property (retain, nonatomic) id rightButtonObj;
@property (retain, nonatomic) NSString *backButtonTitle;
@property (nonatomic) BOOL hidesBackButton;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setRightButton:(id)a0;
- (void)setLeftButton:(id)a0;
- (id)initWithJSObject:(id)a0 context:(id)a1;
- (id)leftButtonForContainer:(id)a0;
- (id)rightButtonForContainer:(id)a0;
- (id)_parseButton:(id)a0 forContainer:(id)a1;

@end
