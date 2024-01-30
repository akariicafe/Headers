@class NSString;

@interface MCSingleAppPayload : MCAppWhitelistPayloadBase

@property (readonly, nonatomic) NSString *applicationBundleID;
@property (readonly, nonatomic) BOOL allowLogout;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (id)restrictions;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (BOOL)mustInstallNonInteractively;
- (id)subtitle1Description;
- (id)subtitle1Label;

@end
