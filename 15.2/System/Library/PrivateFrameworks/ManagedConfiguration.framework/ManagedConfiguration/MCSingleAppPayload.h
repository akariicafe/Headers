@class NSString;

@interface MCSingleAppPayload : MCAppWhitelistPayloadBase

@property (readonly, nonatomic) NSString *applicationBundleID;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)restrictions;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (BOOL)mustInstallNonInteractively;

@end
