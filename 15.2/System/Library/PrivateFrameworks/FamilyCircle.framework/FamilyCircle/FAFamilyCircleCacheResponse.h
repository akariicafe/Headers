@class NSDate, FAFamilyCircle;

@interface FAFamilyCircleCacheResponse : NSObject

@property (retain, nonatomic) FAFamilyCircle *familyCircle;
@property (retain, nonatomic) NSDate *cacheDate;
@property (nonatomic) double maxAge;

- (id)initWithFamilyCircle:(id)a0 cacheDate:(id)a1 maxAge:(double)a2;
- (BOOL)_isFamilyCircleFresh:(id)a0;
- (id)familyCircleValidatingAgeWithDate:(id)a0;
- (id)familyCircleIfFresh;
- (BOOL)isFamilyCircleFresh;
- (void).cxx_destruct;

@end
