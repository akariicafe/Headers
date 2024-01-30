@class ATXHomeScreenPage, NSMutableArray;

@interface ATXHomeScreenLayoutSelectorPageState : NSObject

@property (retain, nonatomic) ATXHomeScreenPage *pageConfig;
@property (retain, nonatomic) NSMutableArray *unfilledSGWidgets;
@property (retain, nonatomic) NSMutableArray *suggestionsAlreadyAssignedToPageToDedupeAgainst;
@property (retain, nonatomic) NSMutableArray *suggestionsToExcludeFromAppPredictionPanel;
@property (nonatomic) BOOL alreadySelectedASGWidgetForTopOfStack;

- (void).cxx_destruct;

@end
