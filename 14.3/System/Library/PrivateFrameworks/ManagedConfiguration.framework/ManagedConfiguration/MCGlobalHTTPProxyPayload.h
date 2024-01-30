@class NSNumber, NSString;

@interface MCGlobalHTTPProxyPayload : MCPayload

@property (retain, nonatomic) NSNumber *proxyPACFallbackAllowedNum;
@property (retain, nonatomic) NSNumber *proxyCaptiveLoginAllowedNum;
@property (nonatomic) int proxyType;
@property (retain, nonatomic) NSString *proxyServer;
@property (retain, nonatomic) NSNumber *proxyServerPort;
@property (retain, nonatomic) NSString *proxyUsername;
@property (retain, nonatomic) NSString *proxyPassword;
@property (retain, nonatomic) NSString *proxyPACURLString;
@property (nonatomic) BOOL proxyPACFallbackAllowed;
@property (nonatomic) BOOL proxyCaptiveLoginAllowed;
@property (retain, nonatomic) NSString *credentialUUID;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)verboseDescription;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)installationWarnings;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
