@class WFParameter, NSSet, UILocalizedIndexedCollation, INObjectCollection;
@protocol WFVariableProvider, WFVariableUIDelegate, WFParameterValuePickable;

@interface WFParameterValuePickerDataSource : UITableViewDiffableDataSource

@property (retain, nonatomic) INObjectCollection *collection;
@property (readonly, nonatomic) UILocalizedIndexedCollation *localizedCollation;
@property (readonly, nonatomic) unsigned long long itemsCount;
@property (readonly, nonatomic) unsigned long long sectionsCount;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (copy, nonatomic) NSSet *allowedVariableTypes;
@property (readonly, nonatomic) WFParameter<WFParameterValuePickable> *parameter;

+ (id)variableSectionIdentifier;

- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (void).cxx_destruct;
- (void)applyCollection:(id)a0 animatingDifferences:(BOOL)a1 filterVariableTitle:(id)a2;
- (void)applyCollection:(id)a0 animatingDifferences:(BOOL)a1 filterVariableTitle:(id)a2 completion:(id /* block */)a3;
- (void)applyEmptyCollectionAnimatingDifferences:(BOOL)a0 completion:(id /* block */)a1;
- (id)displayVariables;
- (id)displayVariablesWithTitle:(id)a0;
- (id)initWithParameter:(id)a0 tableView:(id)a1 cellProvider:(id /* block */)a2;
- (id)parameterStateAtIndexPath:(id)a0;
- (id)snapshotForCollection:(id)a0 filterVariableTitle:(id)a1;

@end
