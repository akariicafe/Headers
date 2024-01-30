@class PCPersistentTimer, NSHashTable;
@protocol SBHSidebarWidgetLearningDataSource;

@interface SBHSidebarWidgetBootstrappingAdvisor : NSObject {
    PCPersistentTimer *_widgetLearningCadenceUpdateTimer;
    NSHashTable *_observers;
}

@property (nonatomic) BOOL shouldSidebarWidgetsBeInLearningMode;
@property (readonly, nonatomic) id<SBHSidebarWidgetLearningDataSource> dataSource;
@property (readonly, nonatomic) double learningDuration;
@property (readonly, nonatomic) unsigned long long learningEpoch;

- (id)initWithDataSource:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_notifyObservers;
- (void)_setupSidebarWidgetsLearningCadence;
- (id)initWithDataSource:(id)a0 learningDuration:(double)a1 learningEpoch:(unsigned long long)a2;
- (void)_updateSidebarWidgetsCommenceDateIfEmpty;
- (BOOL)_requiresLearningCadenceForFavoriteWidgets:(BOOL *)a0;
- (void)_updateSidebarWidgetsEpoch;
- (void)_scheduleWidgetLearningCadenceUpdateTimer:(BOOL)a0;
- (void)_sidebarLearningPeriodTimeIsUp:(id)a0;
- (void)noteSignificantSidebarStateChangeDidOccur;

@end
