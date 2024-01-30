@class HFMediaPlaybackActionBuilder, NSArray, NSString, HFMutableSetDiff, HMActionSet, HMHome;

@interface HFAbstractBaseActionSetBuilder : HFItemBuilder <HFActionSetBuilderProtocol, NSCopying>

@property (retain, nonatomic) HFMutableSetDiff *actionBuilders;
@property (retain, nonatomic) HMActionSet *actionSet;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) BOOL requiresDeviceUnlock;
@property (readonly, nonatomic, getter=isAffectedByEndEvents) BOOL affectedByEndEvents;
@property (readonly, nonatomic) HFMediaPlaybackActionBuilder *mediaAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)homeKitRepresentationClass;

- (void)addAction:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllActions;
- (void).cxx_destruct;
- (void)removeAction:(id)a0;
- (id)deleteActionSet;
- (id)commitItem;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (void)updateAction:(id)a0;
- (id)_removeSuccessfulChanges:(id)a0 fromSetDiff:(id)a1;
- (BOOL)_updateActionBuildersForLightColorAction:(id)a0;
- (id)createActionSetBuilder;
- (id)existingActionBuilder:(id)a0 inSet:(id)a1;
- (id)lazilyUpdateActions;
- (void)updateActionsInBuilder:(id)a0;

@end
