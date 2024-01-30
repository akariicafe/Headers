@class NSDictionary;

@interface MCLoggingPayload : MCPayload

@property (readonly, nonatomic) NSDictionary *loggingPayload;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (id)title;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (BOOL)isAllowedToWriteLogging;
- (id)stubDictionary;

@end
