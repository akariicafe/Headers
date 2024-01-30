@class NSError;

@interface HDAudioAnalyticsResult : NSObject

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;

- (id)initWithStatus:(long long)a0 error:(id)a1;
- (void).cxx_destruct;

@end
