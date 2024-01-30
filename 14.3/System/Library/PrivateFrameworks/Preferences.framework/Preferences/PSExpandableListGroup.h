@class NSString, PSSpecifier, NSMutableArray, PSListController;

@interface PSExpandableListGroup : NSObject <PSSpecifierGroup> {
    PSListController *_listController;
    NSString *_groupSpecifierID;
    long long _collaspeAfterCount;
    NSMutableArray *_specifiers;
    BOOL _showAll;
    PSSpecifier *_showAllSpecifier;
    PSSpecifier *_spinnerSpecifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showAll;
- (id)initWithListController:(id)a0 groupSpecifierID:(id)a1 collapseAfterCount:(long long)a2;
- (id)showAllSpecifier;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (void)addSpecifiers:(id)a0;
- (void)removeAllSpecifiers;
- (void).cxx_destruct;
- (void)reloadSpecifiers;
- (id)specifiers;
- (void)reloadSpecifier:(id)a0;
- (id)spinnerSpecifier;
- (long long)_groupIndex;

@end
