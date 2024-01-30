@class NSString, NSSet, NSURL, UIViewController;
@protocol SBUIRemoteAlertHostInterface;

@interface HUHomeControlServiceContext : NSObject

@property (retain, nonatomic) NSString *homeIdentifier;
@property (retain, nonatomic) NSString *roomIdentifier;
@property (retain, nonatomic) NSString *accessoryIdentifier;
@property (copy, nonatomic) NSString *homeName;
@property (copy, nonatomic) NSString *roomName;
@property (copy, nonatomic) NSString *accessoryName;
@property (copy, nonatomic) NSURL *defaultActionURL;
@property (nonatomic) unsigned long long serviceType;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) id<SBUIRemoteAlertHostInterface> remoteViewControllerProxy;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } animationOriginRect;
@property (retain, nonatomic) NSSet *actions;

+ (id)_homeInfoFromDefaultActionURL:(id)a0;

- (void)dealloc;
- (id)userInfo;
- (void).cxx_destruct;
- (id)_initWithUserInfo:(id)a0;
- (id)initWithAlertConfigurationContext:(id)a0;
- (id)initWithServiceType:(unsigned long long)a0 defaultActionURL:(id)a1;
- (id)initWithServiceType:(unsigned long long)a0 home:(id)a1 accessory:(id)a2 presentingViewController:(id)a3;
- (id)initWithServiceType:(unsigned long long)a0 home:(id)a1 room:(id)a2;
- (id)initWithServiceType:(unsigned long long)a0 homeIdentifier:(id)a1 accessoryIdentifier:(id)a2;
- (id)initWithServiceType:(unsigned long long)a0 homeIdentifier:(id)a1 roomIdentifier:(id)a2;

@end
