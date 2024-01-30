@class NSSet, NSDictionary, NSURL, NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface CoreDAVMultiMoveWithFallbackTaskGroup : CoreDAVTaskGroup

@property (retain, nonatomic) NSMutableArray *outstandingSourceURLsToMove;
@property (readonly, nonatomic) NSSet *sourceURLs;
@property (readonly, nonatomic) NSURL *destinationURL;
@property (readonly, nonatomic) NSDictionary *sourceEntityETags;
@property (readonly, nonatomic) NSDictionary *sourceEntityDataPayloads;
@property (readonly, nonatomic) NSDictionary *sourceEntityDataContentTypes;
@property (readonly, nonatomic) BOOL useFallback;
@property (readonly, nonatomic) int overwrite;
@property (readonly, nonatomic) NSMutableDictionary *destinationEntityETags;
@property (readonly, nonatomic) NSMutableSet *destinationURLs;

- (void).cxx_destruct;
- (id)description;
- (void)startTaskGroup;
- (id)filenameFromURL:(id)a0;
- (void)processOutstandingTasks;
- (id)fullDestinationURLFromSourceURL:(id)a0;
- (void)_completedMoveTask:(id)a0 sourceURL:(id)a1;
- (id)_eTagFromTaskResponseHeaders:(id)a0;
- (void)_completedPutTask:(id)a0 sourceURL:(id)a1;
- (void)_setTagsForDestinationEntityAtURL:(id)a0 fromTaskResponseHeaders:(id)a1 completionBlock:(id /* block */)a2;
- (id)initWithSourceURLs:(id)a0 destinationURL:(id)a1 overwrite:(BOOL)a2 useFallback:(BOOL)a3 sourceEntityDataPayloads:(id)a4 sourceEntityDataContentTypes:(id)a5 sourceEntityETags:(id)a6 accountInfoProvider:(id)a7 taskManager:(id)a8;

@end
