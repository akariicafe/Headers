@interface SBRotationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) long long lastLockedOrientation;
@property (readonly, nonatomic, getter=isVideoRotationEnabled) BOOL videoRotationEnabled;

@end
