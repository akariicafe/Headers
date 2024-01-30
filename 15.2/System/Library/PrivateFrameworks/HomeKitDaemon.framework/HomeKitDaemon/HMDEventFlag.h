@interface HMDEventFlag : HMFObject

@property unsigned long long flagValue;
@property double flagPeriod;

- (id)shortDescription;
- (id)init;
- (id)initWithValue:(unsigned long long)a0 definedPeriod:(double)a1;

@end
