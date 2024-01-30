@class NSString, NSSet;

@interface CRCarPlayAppDeclaration : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic, getter=isSystemApp) BOOL systemApp;
@property (nonatomic) BOOL requiresGeoSupport;
@property (nonatomic) BOOL launchUsingSiri;
@property (nonatomic) BOOL launchNotificationsUsingSiri;
@property (nonatomic) BOOL supportsPlayableContent;
@property (nonatomic) BOOL supportsMessaging;
@property (nonatomic) BOOL supportsCalling;
@property (nonatomic) BOOL supportsMaps;
@property (nonatomic) BOOL supportsAudio;
@property (nonatomic) BOOL supportsCommunication;
@property (nonatomic) BOOL supportsTemplates;
@property (nonatomic) BOOL supportsCharging;
@property (nonatomic) BOOL supportsParking;
@property (nonatomic) BOOL supportsPublicSafety;
@property (nonatomic) BOOL supportsQuickOrdering;
@property (retain, nonatomic) NSSet *autoMakerProtocols;
@property (nonatomic) unsigned long long _applicationCategory;
@property (copy, nonatomic) NSString *bundlePath;

+ (id)declarationForBundleIdentifier:(id)a0 entitlements:(id)a1 infoPlist:(id)a2;
+ (id)requiredEntitlementKeys;
+ (id)requiredInfoKeys;
+ (id)declarationForAppProxy:(id)a0;
+ (id)declarationForBundleIdentifier:(id)a0 info:(id)a1 entitlements:(id)a2;
+ (id)declarationForBundleIdentifier:(id)a0 info:(id)a1 entitlements:(id)a2 bundlePath:(id)a3;

- (void).cxx_destruct;

@end
