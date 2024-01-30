@class NSDictionary;

@interface MCLoggingPayload : MCPayload

@property (readonly, nonatomic) NSDictionary *loggingPayload;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (BOOL)isAllowedToWriteLogging;
- (id)title;
- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (void).cxx_destruct;

@end
