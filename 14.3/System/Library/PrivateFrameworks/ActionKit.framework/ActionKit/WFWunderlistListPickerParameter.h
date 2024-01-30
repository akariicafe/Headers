@class WFAccountAccessResource, NSArray;

@interface WFWunderlistListPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (nonatomic) BOOL hasLoadedLists;
@property (weak, nonatomic) WFAccountAccessResource *accessResource;

- (id)possibleStates;
- (void).cxx_destruct;
- (void)dealloc;
- (id)lists;
- (void)setLists:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)wasAddedToWorkflow;
- (id)defaultSerializedRepresentation;
- (void)fetchListsIfNeeded;
- (void)loadListsFromCache;
- (id)listNamed:(id)a0;

@end
