@class NSError;

@interface HKMobilityAnalyticsResult : NSObject

@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) NSError *error;

+ (id)resultWithStatus:(unsigned long long)a0 error:(id)a1;

- (id)initWithStatus:(unsigned long long)a0 error:(id)a1;
- (void).cxx_destruct;

@end
