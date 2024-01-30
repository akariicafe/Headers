@class AMSBagKeySet, NSString, ACAccount;

@interface AMSUIBundleViewController : AMSUIDynamicViewController <AMSBagConsumer> {
    ACAccount *account;
}

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) NSString *placement;
@property (retain, nonatomic) NSString *serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
