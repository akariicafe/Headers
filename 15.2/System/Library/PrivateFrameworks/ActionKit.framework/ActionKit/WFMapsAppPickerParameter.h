@class NSOrderedSet, NSArray;

@interface WFMapsAppPickerParameter : WFEnumerationParameter <ICAppInstallStatusObserver> {
    NSArray *_possibleStates;
}

@property (readonly, nonatomic) NSOrderedSet *supportedAppIdentifiers;

- (id)possibleStates;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addObservers;
- (void)removeObservers;
- (id)initWithDefinition:(id)a0;
- (id)possibleStatesForLocalization;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)refreshInstalledApps;
- (void)appRegistry:(id)a0 installStatusChangedForApp:(id)a1;

@end
