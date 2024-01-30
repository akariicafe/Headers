@class LSApplicationRecord, NSString, HFCHIPExtension;

@interface HFCHIPEcosystem : NSObject

@property (retain, nonatomic) LSApplicationRecord *applicationRecord;
@property (retain, nonatomic) NSString *chipExtensionBundleIdentifier;
@property (retain, nonatomic) HFCHIPExtension *chipExtension;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *developerName;
@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSString *teamIdentifier;
@property (readonly, nonatomic) BOOL isAppleHome;
@property (readonly, nonatomic) BOOL isTestEcosystemApp;

+ (id)appleEcosystem;
+ (id)allPartnerEcosystemsOnDevice;
+ (id)ecosystemForBundleID:(id)a0;

- (id)initWithExtension:(id)a0;
- (void).cxx_destruct;
- (id)initWithApplicationRecord:(id)a0;

@end
