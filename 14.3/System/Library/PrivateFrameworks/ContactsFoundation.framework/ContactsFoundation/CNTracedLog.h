@class NSString, NSDictionary;

@interface CNTracedLog : NSObject

@property (readonly, copy) NSString *message;
@property (readonly, copy) NSString *domain;
@property (copy) NSString *domainVersion;
@property (copy) NSString *domainScope;
@property (copy) NSString *signature;
@property (copy) NSString *signature2;
@property (copy) NSString *signature3;
@property (copy) NSString *value;
@property (copy) NSString *value2;
@property (copy) NSString *value3;
@property (copy) NSString *uuid;
@property BOOL summarize;
@property long long result;
@property (copy) NSDictionary *customProperties;

+ (id)logWithDomain:(id)a0;
+ (long long)roundNumber:(long long)a0 usingSignificantDigits:(unsigned long long)a1;
+ (id)formatIntegerByRoundingForPrivacy:(long long)a0;
+ (id)formatTimeIntervalByRoundingForPrivacy:(double)a0;
+ (BOOL)shouldLogGivenSamplePercentage:(float)a0;

- (id)init;
- (void).cxx_destruct;
- (void)sendTrace;
- (id)resultString;
- (id)initWithDomain:(id)a0 message:(id)a1;
- (void)enumerateStandardKeysAndValuesUsingBlock:(id /* block */)a0;
- (void)enumerateCustomKeysAndValuesUsingBlock:(id /* block */)a0;
- (void)sendValue:(id)a0 forKey:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateStandardizedKeysAndValuesUsingBlock:(id /* block */)a0;

@end
