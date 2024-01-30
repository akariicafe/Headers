@class ENNotebook, NSArray, EDAMNoteFilter, NSSet, NSMutableArray, EDAMNotesMetadataResultSpec;

@interface ENSessionFindNotesContext : NSObject

@property (retain, nonatomic) ENNotebook *scopeNotebook;
@property (nonatomic) unsigned long long scope;
@property (nonatomic) unsigned long long sortOrder;
@property (retain, nonatomic) EDAMNoteFilter *noteFilter;
@property (retain, nonatomic) EDAMNotesMetadataResultSpec *resultSpec;
@property (nonatomic) unsigned long long maxResults;
@property (nonatomic) BOOL requiresLocalMerge;
@property (nonatomic) BOOL sortAscending;
@property (retain, nonatomic) NSArray *allNotebooks;
@property (retain, nonatomic) NSMutableArray *linkedNotebooksToSearch;
@property (retain, nonatomic) NSMutableArray *findMetadataResults;
@property (retain, nonatomic) NSSet *resultGuidsFromBusiness;
@property (retain, nonatomic) NSArray *results;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
