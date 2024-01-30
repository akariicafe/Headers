@class NSArray;

@interface HUQuickControlStepperViewProfile : HUQuickControlViewProfile

@property (nonatomic) unsigned long long numberOfSegments;
@property (nonatomic) unsigned long long stepperBehavior;
@property (nonatomic) BOOL showSegmentTitles;
@property (nonatomic) unsigned long long stepperStyle;
@property (copy, nonatomic) NSArray *segmentTitles;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)supportsTouchContinuation;

@end
