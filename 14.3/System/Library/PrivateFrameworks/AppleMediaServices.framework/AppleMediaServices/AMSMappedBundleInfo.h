@class NSString;

@interface AMSMappedBundleInfo : NSObject

@property (class, readonly, nonatomic) AMSMappedBundleInfo *currentBundleInfo;

@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *clientName;
@property (retain, nonatomic) NSString *clientVersion;
@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSString *secureScheme;
@property (retain, nonatomic) NSString *accountMediaType;

+ (id)_clientVersionFromProcessInfo:(id)a0 clientName:(id)a1;
+ (id)_accountMediaTypeForClientName:(id)a0 bundleID:(id)a1;
+ (id)_clientNameFromProcessInfo:(id)a0;
+ (id)bundleInfoForProcessInfo:(id)a0;
+ (id)accountMediaTypeInfoForProcessInfo:(id)a0;

- (void).cxx_destruct;
- (id)_initWithClient:(long long)a0 processInfo:(id)a1;

@end
