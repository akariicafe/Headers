@class NSString;

@interface MCRemovalPasswordPayload : MCPayload

@property (retain, nonatomic) NSString *removalPasscode;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;

@end
