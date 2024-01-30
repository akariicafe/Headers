@class NSManagedObjectContext, NSArray, NSString;

@interface ICFoldersFilterTypeSelection : ICFilterTypeSelection

@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (nonatomic) unsigned long long inclusionType;
@property (retain, nonatomic) NSArray *folderIdentifiers;
@property (readonly, copy, nonatomic) NSString *folderSummaryList;
@property (readonly, nonatomic) BOOL containsSharedFolder;

+ (id)keyPathsForValuesAffectingIsEmpty;

- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (long long)filterType;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)filterName;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)addFolderIdentifier:(id)a0;
- (id)emptySummary;
- (id)emptySummaryTitle;
- (id)folderTitlesForIdentifiers:(id)a0;
- (id)initWithManagedObjectContext:(id)a0 inclusionType:(unsigned long long)a1 folderIdentifiers:(id)a2;
- (BOOL)isEqualToICFoldersFilterTypeSelection:(id)a0;
- (id)rawFilterValue;
- (void)removeFolderIdentifier:(id)a0;
- (id)shortEmptySummary;

@end
