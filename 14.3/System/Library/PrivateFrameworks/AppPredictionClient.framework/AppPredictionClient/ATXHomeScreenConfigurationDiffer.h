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
@property (readonly, nonatomic) NSArray *widgetsAddedToStacks;
@property (readonly, nonatomic) NSArray *widgetsDeletedFromStacks;
@property (readonly, nonatomic) NSArray *configuredWidgets;
@property (readonly, nonatomic) NSArray *addedStacks;
@property (readonly, nonatomic) NSArray *deletedStacks;

+ (BOOL)_widget:(id)a0 hasSamePersonalityAsOtherWidget:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPreviousConfigurations:(id)a0 currentConfigurations:(id)a1;
- (id)stackInCurrentConfigurationsForStackedWidget:(id)a0;
- (id)stackInPreviousConfigurationsForStackedWidget:(id)a0;
- (void)_calculatePinnedWidgetChanges;
- (void)_calculateStackedWidgetChanges;

@end
