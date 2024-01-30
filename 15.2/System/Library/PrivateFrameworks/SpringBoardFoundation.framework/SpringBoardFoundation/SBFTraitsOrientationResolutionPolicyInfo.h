@class NSString, NSArray, SBFTraitsSettingsActuationContext;

@interface SBFTraitsOrientationResolutionPolicyInfo : NSObject <NSCopying, BSDescriptionProviding>

@property (readonly, nonatomic) long long resolutionPolicy;
@property (readonly, copy, nonatomic) NSString *associatedParticipantUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedParticipantRole;
@property (readonly, copy, nonatomic) NSArray *associatedAccelerometerStateTypes;
@property (nonatomic) BOOL forceResolution;
@property (copy, nonatomic) SBFTraitsSettingsActuationContext *actuationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolutionPolicyInfoForAssociatedParticipantWithRole:(id)a0;
+ (id)resolutionPolicyInfoAccelerometerWithStateTypes:(id)a0;
+ (id)resolutionPolicyInfoAccelerometer;
+ (id)resolutionPolicyInfoForAssociatedParticipantWithUniqueID:(id)a0;
+ (id)resolutionPolicyInfoNone;
+ (id)resolutionPolicyInfoOrientationBelow;
+ (id)resolutionPolicyInfoOrientationBelowParticipantWithUniqueID:(id)a0;
+ (id)resolutionPolicyInfoOrientationBelowParticipantWithRole:(id)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithResolutionPolicy:(long long)a0 associatedParticipantRole:(id)a1;
- (id)initWithResolutionPolicyInfo:(id)a0;
- (id)succinctDescription;
- (id)initWithResolutionPolicy:(long long)a0 associatedAccStateTypes:(id)a1;
- (void).cxx_destruct;
- (id)initWithResolutionPolicy:(long long)a0 associatedParticipantUniqueID:(id)a1;
- (id)initWithResolutionPolicy:(long long)a0 associatedParticipantUniqueID:(id)a1 associatedParticipantRole:(id)a2 associatedAccStateTypes:(id)a3;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithResolutionPolicy:(long long)a0;
- (void)setAssociatedAccelerometerStateTypes:(id)a0;

@end
