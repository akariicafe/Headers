@class NSString;

@interface PFLAnalyticsSubmitter : NSObject

@property (readonly, nonatomic) NSString *submitterId;

+ (id)shared;
+ (id)stringForKey:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)init;
- (void)submitAnalyticsForKey:(unsigned long long)a0 value:(id)a1;

@end
