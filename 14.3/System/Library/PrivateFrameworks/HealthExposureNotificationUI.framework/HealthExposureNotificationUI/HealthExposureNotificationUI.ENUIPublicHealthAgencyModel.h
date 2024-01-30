@class NSArray, NSString, NSURL, UIImage, _TtC28HealthExposureNotificationUI27ENUIPublicHealthAgencyModel;

@interface HealthExposureNotificationUI.ENUIPublicHealthAgencyModel : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ appBundleId;
    void /* unknown type, empty encoding */ introductoryText;
    void /* unknown type, empty encoding */ consentVersion;
    void /* unknown type, empty encoding */ regionWebsiteURL;
    void /* unknown type, empty encoding */ analyticsConsentText;
    void /* unknown type, empty encoding */ verificationIntroductoryText;
    void /* unknown type, empty encoding */ verificationCodeHelpURL;
    void /* unknown type, empty encoding */ verificationSymptomOnsetText;
    void /* unknown type, empty encoding */ verificationTravelStatusText;
}

@property (class, nonatomic, retain) _TtC28HealthExposureNotificationUI27ENUIPublicHealthAgencyModel *activeRegion;
@property (class, nonatomic, copy) NSArray *authorizedRegions;
@property (class, nonatomic, copy) NSArray *availableRegions;
@property (class, nonatomic, readonly) NSString *dummyRegionCountryCode;
@property (class, nonatomic, readonly) NSArray *allRegions;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ region;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *appBundleId;
@property (nonatomic, readonly) NSString *introductoryText;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ header;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ legalese;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ consentStatus;
@property (nonatomic, readonly) NSString *consentVersion;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isAuthorized;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ regionVersion;
@property (nonatomic, readonly) NSURL *regionWebsiteURL;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ wantsAnalytics;
@property (nonatomic) void /* unknown type, empty encoding */ analyticsConsentStatus;
@property (nonatomic, readonly) NSString *analyticsConsentText;
@property (nonatomic, readonly) NSString *verificationIntroductoryText;
@property (nonatomic, readonly) NSURL *verificationCodeHelpURL;
@property (nonatomic, readonly) NSString *verificationSymptomOnsetText;
@property (nonatomic, readonly) NSString *verificationTravelStatusText;
@property (nonatomic, readonly) BOOL isSymptomOnsetNeeded;
@property (nonatomic, readonly) BOOL isTravelStatusNeeded;
@property (nonatomic, readonly) BOOL isAppInstalled;
@property (nonatomic, readonly) BOOL isRegionUsingApp;
@property (nonatomic, readonly) NSString *installedAppName;
@property (nonatomic, readonly) UIImage *installedAppIcon;
@property (nonatomic, readonly) BOOL regionIsPlaceholder;

+ (void)refreshRegionsWithCompletion:(id /* block */)a0;
+ (id)defaultModelWithBundleId:(id)a0 isAuthorized:(BOOL)a1;
+ (id)regionForRegionCode:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRegion:(id)a0 name:(id)a1 appBundleId:(id)a2 introductoryText:(id)a3 header:(id)a4 legalese:(id)a5 consentStatus:(id)a6 consentVersion:(id)a7 isAuthorized:(BOOL)a8 regionVersion:(long long)a9 regionWebsiteURL:(id)a10 wantsAnalytics:(BOOL)a11 analyticsConsentStatus:(long long)a12 analyticsConsentText:(id)a13 verificationIntroductoryText:(id)a14 verificationCodeHelpURL:(id)a15 verificationSymptomOnsetText:(id)a16 verificationTravelStatusText:(id)a17;

@end
