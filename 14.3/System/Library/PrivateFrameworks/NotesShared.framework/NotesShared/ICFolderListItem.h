@class NoteCollectionObject, ICNoteContainer, NSString, NSMutableArray, ICFolderListViewState;

@interface ICFolderListItem : NSObject

@property (nonatomic) BOOL isAccount;
@property (nonatomic) BOOL isAccountProxy;
@property (nonatomic) BOOL isLegacy;
@property (nonatomic) BOOL isDefaultFolder;
@property (nonatomic) BOOL isTrash;
@property (retain, nonatomic) ICNoteContainer *noteContainer;
@property (retain, nonatomic) NoteCollectionObject *noteCollection;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (readonly, nonatomic) BOOL isCollapsible;
@property (retain, nonatomic) NSMutableArray *children;
@property (weak, nonatomic) ICFolderListItem *parent;
@property (weak, nonatomic) ICFolderListViewState *viewState;
@property (readonly, nonatomic) unsigned long long level;
@property (readonly, nonatomic) unsigned long long countOfVisibleDescendants;
@property (readonly, nonatomic) NSString *title;
@property (nonatomic) unsigned long long folderListItemAccountType;

- (void)setCollapsed:(BOOL)a0;
- (void).cxx_destruct;
- (id)description;
- (id)flattenedChildItems;
- (id)initWithViewState:(id)a0;
- (void)addChildItem:(id)a0;
- (void)addNoteContainer:(id)a0 folderToExclude:(id)a1;
- (void)insertChildItem:(id)a0 atIndex:(unsigned long long)a1;

@end
