@class NSString;

@interface WBSExtensionTelemetryData : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL allWebsitesPermissionLevel;
@property (nonatomic) unsigned long long websitesGrantedAccessCount;
@property (nonatomic) unsigned long long websitesDeniedAccessCount;
@property (nonatomic) BOOL canOverrideNewTabPage;

- (void).cxx_destruct;

@end
