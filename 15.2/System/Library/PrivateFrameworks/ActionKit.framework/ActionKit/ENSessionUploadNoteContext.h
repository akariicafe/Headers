@class ENNotebook, EDAMNote, ENNoteStoreClient, ENNoteRef;

@interface ENSessionUploadNoteContext : NSObject

@property (retain, nonatomic) EDAMNote *note;
@property (retain, nonatomic) ENNoteRef *refToReplace;
@property (retain, nonatomic) ENNotebook *notebook;
@property (nonatomic) long long policy;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ progress;
@property (retain, nonatomic) ENNoteStoreClient *noteStore;
@property (retain, nonatomic) ENNoteRef *noteRef;

- (void).cxx_destruct;

@end
