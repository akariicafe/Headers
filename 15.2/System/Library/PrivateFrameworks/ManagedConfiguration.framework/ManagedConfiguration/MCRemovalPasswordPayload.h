@class NSString;

@interface MCRemovalPasswordPayload : MCPayload

@property (retain, nonatomic) NSString *removalPasscode;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (void).cxx_destruct;

@end
