@class NSString, NSArray, NSDictionary, NSSet, NSMutableArray;

@interface CACSpokenCommandPresentation : NSObject {
    NSArray *_commandItems;
    NSArray *_commandsOnly;
    NSMutableArray *_newCommandItems;
    NSMutableArray *_deletedCommandIdentifiers;
    NSArray *_commandGroups;
    NSArray *_allCommandGroups;
    NSSet *_excludedSearchWordSet;
    NSDictionary *_conflictDictionary;
}

@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSString *searchString;
@property (readonly) BOOL isSearching;
@property (retain, nonatomic) NSArray *externalCommandGroups;
@property (retain, nonatomic) NSArray *relevantCommandIdentifiers;
@property (retain, nonatomic) NSDictionary *additionalCommandInfo;
@property (readonly, nonatomic) NSArray *nestedCommandGroupsAndItems;
@property (readonly, nonatomic) NSArray *flattenedCommandGroupsAndItems;
@property (nonatomic) BOOL usedByPreferences;

- (void).cxx_destruct;
- (id)init;
- (void)saveChanges;
- (void)discardChanges;
- (BOOL)hasConflicts;
- (void)resetConflicts;
- (void)_flushCommands;
- (void)_deepFlush;
- (unsigned long long)indexOfItemWithIdentifier:(id)a0;
- (void)sortCustomCommands;
- (void)addCustomCommandItem:(id)a0;
- (BOOL)groupIsCollapsed:(id)a0;
- (id)_filteredCommandGroupsAndItemsWithSearchString:(id)a0;
- (unsigned long long)indexOfItemWithIdentifier:(id)a0 ignoreGroups:(BOOL)a1;
- (id)itemsConflictingWithItem:(id)a0;
- (void)refreshItemWithIdentifier:(id)a0;
- (void)deleteCustomCommandAtIndex:(unsigned long long)a0;
- (void)setGroup:(id)a0 isCollapsed:(BOOL)a1;

@end
