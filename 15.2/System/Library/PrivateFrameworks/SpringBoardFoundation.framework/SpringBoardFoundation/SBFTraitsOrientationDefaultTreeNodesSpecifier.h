@class NSNumber, NSString;

@interface SBFTraitsOrientationDefaultTreeNodesSpecifier : SBFTraitsOrientationStageComponent <SBFTraitsPreferencesStageTreeNodesSpecifying>

@property (nonatomic) NSNumber *componentOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_activeOrientationOrderedNodesWithContext:(id)a0;
- (id)updateStageTreeNodesSpecifications:(id)a0 stageParticipantsRoles:(id)a1 context:(id)a2;

@end
