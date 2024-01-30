@class NSString;

@interface PFLAnalyticsSubmitter : NSObject

@property (readonly, nonatomic) NSString *submitterId;

+ (id)stringForKey:(unsigned long long)a0;
+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (void)submitAnalyticsForKey:(unsigned long long)a0 value:(id)a1;

@end
