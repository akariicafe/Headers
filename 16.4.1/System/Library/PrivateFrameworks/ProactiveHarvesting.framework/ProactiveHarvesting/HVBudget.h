@interface HVBudget : NSObject {
    unsigned int _alwaysAllowSourcesOverride;
    unsigned int _alwaysDenySourcesOverride;
    unsigned int _noServiceSources;
    unsigned int _neverUseBatterySources;
    unsigned int _delayedBudgetedSources;
    unsigned int _budgetedSources;
    unsigned int _realtimeSources;
}

- (id)init;

@end
