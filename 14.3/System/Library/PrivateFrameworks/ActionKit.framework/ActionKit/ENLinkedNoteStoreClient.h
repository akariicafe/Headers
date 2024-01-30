@class ENLinkedNotebookRef;
@protocol ENLinkedNoteStoreClientDelegate;

@interface ENLinkedNoteStoreClient : ENNoteStoreClient

@property (retain, nonatomic) ENLinkedNotebookRef *linkedNotebookRef;
@property (weak, nonatomic) id<ENLinkedNoteStoreClientDelegate> delegate;

+ (id)noteStoreClientForLinkedNotebookRef:(id)a0;

- (void).cxx_destruct;
- (id)authenticationToken;
- (id)noteStoreUrl;

@end
