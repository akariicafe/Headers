@class NSNumber, NSString;

@interface SBFTraitsOrientationStageComponent : NSObject <SBFTraitsPreferencesStageComponent>

@property (nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultActiveOrientationBelowRoles;
+ (id)defaultAccelerometerDrivenRoles;
+ (id)defaultOtherParticipantDrivenRoles;
+ (id)defaultKeyboardFocusDrivenRoles;

- (long long)preferencesType;

@end
