@class NSString, AMSBagKeySet, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol, AMSURLProtocolDelegate, NSURLSessionDelegate;

@interface AMSSyncPasswordSettingsTask : AMSTask <AMSURLProtocolDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly, weak, nonatomic) id<NSURLSessionDelegate, AMSURLProtocolDelegate> delegate;
@property (readonly, nonatomic) unsigned long long freeSetting;
@property (readonly, nonatomic) unsigned long long paidSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (unsigned long long)freePasswordSettingFromServerValue:(unsigned long long)a0;
+ (unsigned long long)paidPasswordSettingFromServerValue:(unsigned long long)a0;
+ (id)serverValueForFreePasswordSetting:(unsigned long long)a0;
+ (id)serverValueForPaidPasswordSetting:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 freeSetting:(unsigned long long)a1 paidSetting:(unsigned long long)a2 delegate:(id)a3 bag:(id)a4;
- (id)performSync;

@end
