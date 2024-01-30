@class HFMediaPlaybackActionBuilder, NSArray, NSString, HFMutableSetDiff, HMActionSet;

@interface HFAbstractBaseActionSetBuilder : HFItemBuilder <HFActionSetBuilderProtocol>

@property (retain, nonatomic) HFMutableSetDiff *actionBuilders;
@property (retain, nonatomic) HMActionSet *actionSet;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) BOOL requiresDeviceUnlock;
@property (readonly, nonatomic, getter=isAffectedByEndEvents) BOOL affectedByEndEvents;
@property (readonly, nonatomic) HFMediaPlaybackActionBuilder *mediaAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)deleteActionSet;
- (void)addAction:(id)a0;
- (void)removeAllActions;
- (id)commitItem;
- (void)removeAction:(id)a0;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (id)existingActionBuilder:(id)a0 inSet:(id)a1;
- (void)updateAction:(id)a0;
- (id)lazilyUpdateActions;
- (BOOL)_updateActionBuildersForLightColorAction:(id)a0;

@end
