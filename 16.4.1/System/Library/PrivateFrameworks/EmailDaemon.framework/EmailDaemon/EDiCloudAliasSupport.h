@class NSString, NSURL, ACAccount, NSObject;
@protocol OS_os_log;

@interface EDiCloudAliasSupport : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) ACAccount *appleAccount;
@property (readonly, nonatomic) NSURL *aliasLookupURL;
@property (readonly, nonatomic) NSString *aliasUserAgent;
@property (readonly, nonatomic) NSString *aliasAuthorizationHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushUpdateForAliasDataWithEmailAddresses:(id)a0 defaultEmailAddress:(id)a1;
- (id)anisetteDataWithError:(id *)a0;
- (id)initWithAppleAccount:(id)a0;
- (id)_prepareAliasDataForEmailAddresses:(id)a0 defaultEmailAddress:(id)a1;
- (void).cxx_destruct;

@end
