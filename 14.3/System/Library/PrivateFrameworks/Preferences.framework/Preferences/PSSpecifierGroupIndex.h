@class NSArray, NSMutableArray;

@interface PSSpecifierGroupIndex : NSObject <NSCopying> {
    NSMutableArray *_groupSections;
    NSMutableArray *_groupSpecifiers;
    NSMutableArray *_ungroupedPrefixSpecifiers;
    BOOL _wantsDebugCallbacks;
}

@property (readonly, copy, nonatomic) NSMutableArray *specifiers;
@property (readonly, copy, nonatomic) NSArray *groupSpecifiers;

+ (id)groupIndexWithSpecifiers:(id)a0;
+ (BOOL)_wantsDebuggingCallbacks;

- (void)_getSection:(out unsigned long long *)a0 row:(out unsigned long long *)a1 forSpecifierAtIndex:(unsigned long long)a2 forInsertion:(BOOL)a3;
- (id)indexPathForSpecifierAtIndex:(unsigned long long)a0;
- (void)_didPerformOperation:(id)a0 forSpecifierUpdates:(id)a1;
- (unsigned long long)numberOfRowsInGroupAtIndex:(unsigned long long)a0;
- (void)_getSection:(out unsigned long long *)a0 row:(out unsigned long long *)a1 forSpecifierAtIndex:(unsigned long long)a2 forInsertion:(BOOL)a3 allowGroupSpecifiers:(BOOL)a4;
- (unsigned long long)_indexOfSpecifierInSection:(unsigned long long)a0 row:(unsigned long long)a1 forInsertion:(BOOL)a2;
- (id)specifiersInGroupAtGroupIndex:(unsigned long long)a0;
- (id)indexPathForSpecifierAtIndex:(unsigned long long)a0 forInsertion:(BOOL)a1;
- (id)_tabStringOfDepth:(unsigned long long)a0;
- (unsigned long long)indexOfGroupWithID:(id)a0;
- (void)_appendDescriptionOfArray:(id)a0 toString:(id)a1 withTabLevel:(unsigned long long)a2;
- (void)_manuallyFindSection:(out unsigned long long *)a0 row:(out unsigned long long *)a1 forSpecifierAtIndex:(unsigned long long)a2;
- (id)indexPathForSpecifierWithID:(id)a0;
- (BOOL)getGroup:(out unsigned long long *)a0 row:(out unsigned long long *)a1 ofSpecifierWithID:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSpecifiersInGroup:(id)a0;
- (id)specifiersInGroupWithID:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSpecifiersInGroupWithID:(id)a0;
- (id)_synthesizedSpecifiersFromGroupIndex;
- (id)init;
- (BOOL)getGroup:(out unsigned long long *)a0 row:(out unsigned long long *)a1 ofSpecifier:(id)a2;
- (unsigned long long)indexOfGroup:(id)a0;
- (BOOL)getGroup:(out unsigned long long *)a0 row:(out unsigned long long *)a1 ofSpecifierAtIndex:(unsigned long long)a2;
- (id)specifiersInGroup:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)indexPathForSpecifier:(id)a0;
- (void)performSpecifierUpdates:(id)a0;
- (id)specifierAtIndexPath:(id)a0;
- (unsigned long long)numberOfGroups;
- (void)performUpdateOperation:(id)a0;
- (unsigned long long)indexOfSpecifierAtIndexPath:(id)a0 forInsertion:(BOOL)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSpecifiersInGroupAtGroupIndex:(unsigned long long)a0;
- (unsigned long long)groupIndexOfGroup:(id)a0;
- (unsigned long long)indexOfSpecifierAtIndexPath:(id)a0;
- (unsigned long long)groupIndexOfGroupWithID:(id)a0;
- (void)performSpecifierUpdatesUsingBlock:(id /* block */)a0;
- (id)description;
- (id)_init;
- (id)initWithSpecifiers:(id)a0;
- (void)_createGroupIndex;
- (id)_initForCopyWithGroupIndex:(id)a0;
- (id)_ungroupedPrefixSpecifiers;
- (void)reloadWithSpecifiers:(id)a0;
- (void)performUpdateOperation:(id)a0 forSpecifierUpdates:(id)a1;
- (id)_groupSections;
- (void)_willPerformOperation:(id)a0 forSpecifierUpdates:(id)a1;
- (unsigned long long)indexOfGroupAtGroupIndex:(unsigned long long)a0;

@end
