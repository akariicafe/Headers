@class NSDictionary;

@interface MCLoggingPayload : MCPayload

@property (readonly, nonatomic) NSDictionary *loggingPayload;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (BOOL)isAllowedToWriteLogging;
- (id)title;

@end
