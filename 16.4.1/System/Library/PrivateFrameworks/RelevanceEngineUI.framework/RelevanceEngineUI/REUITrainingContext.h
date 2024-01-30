@class NSArray, NSMutableDictionary;

@interface REUITrainingContext : RETrainingContext {
    NSMutableDictionary *_becameVisibleDates;
    NSMutableDictionary *_visibilityDurations;
}

@property (readonly, nonatomic) double maximumNegativeDwellTime;
@property (readonly, nonatomic) double minimumPositiveDwellTime;
@property (readonly, nonatomic) unsigned long long onScreenElementCount;
@property (readonly, nonatomic) NSArray *visibleElementIdentifiers;
@property (nonatomic) BOOL resetsWhenResignsCurrent;

- (id)init;
- (void).cxx_destruct;
- (void)resetContext;
- (id)_higherElementsThanElement:(id)a0;
- (id)_interactionForElement:(id)a0;
- (id)_lowerElementsThanElement:(id)a0;
- (void)_trainDwellForElement:(id)a0 withInterval:(double)a1;
- (id)_visibleElements;
- (void)_willResignCurrent;
- (BOOL)elementIsAvailable:(id)a0;
- (void)elementWithIdentifierDidDisplay:(id)a0;
- (void)elementWithIdentifierDidEndDisplay:(id)a0;
- (id)elementsOrdered:(unsigned long long)a0 relativeToElement:(id)a1;
- (id)interactionTypeForElement:(id)a0;
- (BOOL)isDisplayingElementWithIdentifier:(id)a0;
- (BOOL)performSimulationCommand:(id)a0 withOptions:(id)a1;
- (void)selectElementWithIdentifier:(id)a0;

@end
