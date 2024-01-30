@class NSArray, INObjectCollection, NSError;
@protocol WFDynamicEnumerationDataSource;

@interface WFDynamicEnumerationParameter : WFEnumerationParameter {
    id _defaultSerializedRepresentation;
}

@property (nonatomic) unsigned long long defaultValueLoadingState;
@property (readonly, nonatomic) NSArray *possibleStates;
@property (retain, nonatomic) INObjectCollection *possibleStatesCollection;
@property (readonly, nonatomic) unsigned long long possibleStatesLoadingState;
@property (readonly, nonatomic) NSError *possibleStatesLoadingError;
@property (weak, nonatomic) id<WFDynamicEnumerationDataSource> dataSource;

- (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 completionHandler:(id /* block */)a2;
- (void)setPossibleStatesFromRemoteSource:(id)a0;
- (id)possibleStatesForLocalization;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)accessoryColorForPossibleState:(id)a0;
- (BOOL)parameterStateIsValid:(id)a0;
- (void)possibleStatesDidChange;
- (BOOL)alwaysShowsButton;
- (void)defaultSerializedRepresentationDidChange;
- (id)defaultSerializedRepresentation;
- (BOOL)allowsMultipleValues;
- (void)clearPossibleStates;
- (void)reloadPossibleStates;
- (void)setPossibleStates:(id)a0;
- (void)loadPossibleStatesWithCompletionHandler:(id /* block */)a0;

@end
