@class NSArray;

@interface HUQuickControlStepperViewProfile : HUQuickControlViewProfile

@property (nonatomic) unsigned long long numberOfSegments;
@property (nonatomic) unsigned long long stepperBehavior;
@property (nonatomic) BOOL showSegmentTitles;
@property (nonatomic) unsigned long long stepperStyle;
@property (copy, nonatomic) NSArray *segmentTitles;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)supportsTouchContinuation;

@end
