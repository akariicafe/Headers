@class NSString, NSURL;
@protocol SBUIRemoteAlertHostInterface;

@interface HUHomeControlServiceContext : NSObject

@property (retain, nonatomic) NSString *homeIdentifier;
@property (retain, nonatomic) NSString *roomIdentifier;
@property (copy, nonatomic) NSString *homeName;
@property (copy, nonatomic) NSString *roomName;
@property (copy, nonatomic) NSURL *defaultActionURL;
@property (nonatomic) unsigned long long serviceType;
@property (retain, nonatomic) id<SBUIRemoteAlertHostInterface> remoteViewControllerProxy;

+ (id)_homeInfoFromDefaultActionURL:(id)a0;

- (id)userInfo;
- (void).cxx_destruct;
- (id)initWithServiceType:(unsigned long long)a0 home:(id)a1 room:(id)a2;
- (id)initWithServiceType:(unsigned long long)a0 homeIdentifier:(id)a1 roomIdentifier:(id)a2;
- (id)_initWithUserInfo:(id)a0;
- (id)initWithServiceType:(unsigned long long)a0 defaultActionURL:(id)a1;
- (id)initWithAlertConfigurationContext:(id)a0;

@end
