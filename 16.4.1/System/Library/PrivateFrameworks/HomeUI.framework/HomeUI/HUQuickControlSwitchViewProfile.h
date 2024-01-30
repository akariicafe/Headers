@class NSString, HFNumberValueConstraints;

@interface HUQuickControlSwitchViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>

@property (readonly, nonatomic) HFNumberValueConstraints *primaryValueConstraints;
@property (readonly, nonatomic) HFNumberValueConstraints *secondaryValueConstraints;
@property (readonly, nonatomic) BOOL hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)gestureDragCoefficient;
- (BOOL)supportsTouchContinuation;

@end
