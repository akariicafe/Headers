@class NSArray, ATXHomeScreenConfigurationComponentsDiffer, ATXHomeScreenConfigurationComponents;

@interface ATXHomeScreenConfigurationDiffer : NSObject {
    ATXHomeScreenConfigurationComponents *_previousComponents;
    ATXHomeScreenConfigurationComponents *_currentComponents;
    ATXHomeScreenConfigurationComponentsDiffer *_componentsDiffer;
    NSArray *_configuredPinnedWidgets;
    NSArray *_configuredStackedWidgets;
}

@property (readonly, nonatomic) NSArray *addedPinnedWidgets;
@property (readonly, nonatomic) NSArray *deletedPinnedWidgets;
@property (readonly, nonatomic) NSArray *addedApps;
@property (readonly, nonatomic) NSArray *removedApps;
@property (readonly, nonatomic) NSArray *widgetsAddedToStacksByUser;
@property (readonly, nonatomic) NSArray *widgetsDeletedFromStacksByUser;
@property (readonly, nonatomic) NSArray *suggestedWidgetsAddedPermanentlyByUser;
@property (readonly, nonatomic) NSArray *suggestedWidgetsRemoved;
@property (readonly, nonatomic) NSArray *configuredWidgets;
@property (readonly, nonatomic) NSArray *addedStacks;
@property (readonly, nonatomic) NSArray *deletedStacks;

+ (BOOL)_widget:(id)a0 hasSamePersonalityAsOtherWidget:(id)a1;

- (void)_calculatePinnedWidgetChanges;
- (id)stackInPreviousConfigurationsForStackedWidget:(id)a0;
- (id)stackInCurrentConfigurationsForStackedWidget:(id)a0;
- (BOOL)currentConfigContainsWidgetWithBundleId:(id)a0 kind:(id)a1 size:(unsigned long long)a2;
- (void)_calculateStackedWidgetChanges;
- (id)init;
- (id)initWithPreviousConfigurations:(id)a0 currentConfigurations:(id)a1;
- (void).cxx_destruct;

@end
