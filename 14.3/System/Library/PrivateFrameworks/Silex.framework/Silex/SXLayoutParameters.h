@class SXLayoutOptions;

@interface SXLayoutParameters : NSObject

@property (readonly, nonatomic) SXLayoutOptions *layoutOptions;
@property (readonly, nonatomic) unsigned long long layoutType;
@property (readonly, nonatomic) double expectedDuration;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLayoutOptions:(id)a0 layoutType:(unsigned long long)a1 expectedDuration:(double)a2;

@end
