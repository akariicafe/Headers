@class NSString, SBFTraitsParticipant, NSArray;
@protocol SBFTraitsPreferencesTreeNode;

@interface SBFTraitsPreferencesTreeNode : NSObject <SBFTraitsPreferencesTreeNode, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) SBFTraitsParticipant *participant;
@property (weak, nonatomic) id<SBFTraitsPreferencesTreeNode> parent;
@property (retain, nonatomic) NSArray *children;
@property (nonatomic) double order;
@property (nonatomic) BOOL debugLastSettingsWereValidated;
@property (copy, nonatomic) NSString *debugLastOrientationSettingsValidationFailureReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)settingsUpdater;
- (id)initWithParticipant:(id)a0;
- (void)addChild:(id)a0;
- (id)_participant;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
