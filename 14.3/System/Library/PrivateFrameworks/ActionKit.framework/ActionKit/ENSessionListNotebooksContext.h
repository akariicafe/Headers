@class NSCountedSet, NSMutableDictionary, NSError, NSMutableArray;

@interface ENSessionListNotebooksContext : NSObject

@property (retain, nonatomic) NSMutableArray *resultNotebooks;
@property (retain, nonatomic) NSMutableArray *linkedPersonalNotebooks;
@property (retain, nonatomic) NSMutableDictionary *sharedBusinessNotebooks;
@property (retain, nonatomic) NSCountedSet *sharedBusinessNotebookGuids;
@property (retain, nonatomic) NSMutableDictionary *businessNotebooks;
@property (retain, nonatomic) NSMutableDictionary *sharedNotebooks;
@property (nonatomic) long long pendingSharedNotebooks;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
