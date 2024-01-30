@class NSString;

@interface _HKActivityRingViewSizingDirective : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) double width;
@property (nonatomic) double outerRingOffset;
@property (nonatomic) double ringThickness;
@property (nonatomic) double ringInterspacing;

+ (id)activityRingSizingDirectiveWithIdentifier:(id)a0 width:(double)a1 outerRingOffset:(double)a2 ringThickness:(double)a3 ringInterspacing:(double)a4;
+ (id)sortedRingRatioDirectives;

- (void).cxx_destruct;
- (id)description;

@end
