@class NSString;

@interface MCRemovalPasswordPayload : MCPayload

@property (retain, nonatomic) NSString *removalPasscode;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)stubDictionary;

@end
