@class WFAccountAccessResource, NSArray;

@interface WFTodoistProjectPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (nonatomic) BOOL hasLoadedProjects;
@property (weak, nonatomic) WFAccountAccessResource *accessResource;

- (id)possibleStates;
- (void)setProjects:(id)a0;
- (id)projects;
- (void).cxx_destruct;
- (void)dealloc;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)accessoryColorForPossibleState:(id)a0;
- (void)wasAddedToWorkflow;
- (void)fetchProjectsIfNeeded;
- (void)loadProjectsFromCache;
- (id)projectNamed:(id)a0;

@end
