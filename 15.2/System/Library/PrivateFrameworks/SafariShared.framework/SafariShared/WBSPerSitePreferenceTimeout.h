@interface WBSPerSitePreferenceTimeout : NSObject

@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) id fallbackValue;

+ (id)timeoutWithInterval:(double)a0 fallbackValue:(id)a1;

- (void).cxx_destruct;
- (id)initWithInterval:(double)a0 fallbackValue:(id)a1;

@end
