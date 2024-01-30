@class NSString, NSArray, AMSUIWebBarButtonItemModel;

@interface AMSUIWebNavigationBarModel : NSObject <AMSUIWebModelInterface>

@property (retain, nonatomic) AMSUIWebBarButtonItemModel *accessoryBarButtonItemModel;
@property (retain, nonatomic) NSString *backButtonTitle;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) BOOL hidesBackButton;
@property (readonly, nonatomic) BOOL includesLeftItems;
@property (readonly, nonatomic) BOOL includesRightItems;
@property (retain, nonatomic) AMSUIWebBarButtonItemModel *leftBarButtonItemModel;
@property (retain, nonatomic) NSArray *otherBarButtonItemModels;
@property (retain, nonatomic) AMSUIWebBarButtonItemModel *rightBarButtonItemModel;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
