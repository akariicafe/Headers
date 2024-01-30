@class NSString;

@interface MCAirPlaySecurityPayload : MCPayload

@property (retain, nonatomic) NSString *accessType;
@property (retain, nonatomic) NSString *securityType;
@property (retain, nonatomic) NSString *password;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)subtitle2Label;
- (void).cxx_destruct;
- (id)subtitle2Description;
- (id)verboseDescription;

@end
