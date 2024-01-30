@interface SBSystemApertureDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL unobscureIntersensorRegion;
@property (nonatomic) BOOL alwaysShowSystemApertureOnClonedDisplays;
@property (readonly, nonatomic) BOOL alwaysShowSystemApertureInSnapshots;

- (void)_bindAndRegisterDefaults;

@end
