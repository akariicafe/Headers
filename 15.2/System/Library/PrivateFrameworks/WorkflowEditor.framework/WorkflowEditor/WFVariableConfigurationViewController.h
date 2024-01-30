@class WFUnitVariableAggrandizement, NSString, NSArray, WFVariableConfigurationInfoView, NSOrderedSet, WFPropertyVariableAggrandizement, WFDateFormatVariableAggrandizement, WFCoercionVariableAggrandizement, UITableView, WFVariableConfigurationHeaderView, WFDictionaryValueVariableAggrandizement, WFVariable;
@protocol WFVariableConfigurationViewControllerDelegate;

@interface WFVariableConfigurationViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WFVariableConfigurationCellSizingDelegate, WFVariableDelegate, WFVariableObserver, WFVariableConfigurationHeaderViewDelegate, WFVariableConfigurationOptionsViewControllerDelegate>

@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) WFVariableConfigurationHeaderView *headerView;
@property (weak, nonatomic) WFVariableConfigurationInfoView *infoView;
@property (retain, nonatomic) NSOrderedSet *classesForVisibleAggrandizements;
@property (retain, nonatomic) NSArray *properties;
@property (nonatomic) BOOL propertyListExpanded;
@property (nonatomic) BOOL userExplicitlySelectedDefaultProperty;
@property (retain, nonatomic) WFCoercionVariableAggrandizement *coercionAggrandizement;
@property (retain, nonatomic) WFPropertyVariableAggrandizement *propertyAggrandizement;
@property (retain, nonatomic) WFDateFormatVariableAggrandizement *dateFormatAggrandizement;
@property (retain, nonatomic) WFDictionaryValueVariableAggrandizement *dictionaryValueAggrandizement;
@property (retain, nonatomic) WFUnitVariableAggrandizement *unitAggrandizement;
@property (readonly, nonatomic) WFVariable *variable;
@property (weak, nonatomic) id<WFVariableConfigurationViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long resultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPropertyForContentClass:(Class)a0 resultType:(unsigned long long)a1;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithVariable:(id)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)variableDidChange:(id)a0;
- (void)variableContentClassesDidChange;
- (void)availableVariablesDidChange;
- (void)optionsViewController:(id)a0 didSelectOption:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForConfigurationCell:(id)a0 withProposedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)headerViewTypeTapped:(id)a0;
- (BOOL)variableSupportsCoercionAggrandizement;
- (Class)postCoercionContentClass;
- (void)updateHeaderView;
- (void)updateVisibleAggrandizements;
- (BOOL)hasMeasurementUnit;
- (id)currentPropertyMeasurementUnitType;
- (void)generateUpdatedVariable;

@end
