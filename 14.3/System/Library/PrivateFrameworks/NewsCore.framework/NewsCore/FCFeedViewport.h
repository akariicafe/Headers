@class NSArray, NSString;

@interface FCFeedViewport : NSObject

@property (readonly, copy, nonatomic) NSArray *internalElements;
@property (readonly, copy, nonatomic) NSArray *externalElements;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *groupElements;
@property (readonly, copy, nonatomic) NSArray *headlines;
@property (readonly, nonatomic) double ageOfTopmostGroup;

+ (id)freshlyUnarchivedViewportFromViewport:(id)a0;
+ (id)viewportFromPBViewport:(id)a0;
+ (id)dataFromViewport:(id)a0 prune:(BOOL)a1 preserveBookmark:(id)a2;
+ (id)pbViewportFromViewport:(id)a0 prune:(BOOL)a1 preserveBookmark:(id)a2;
+ (id)viewportFromData:(id)a0;

- (id)bookmarkForLastHeadline;
- (id)initWithIdentifier:(id)a0 elements:(id)a1;
- (id)init;
- (id)deflatedCopy;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 internalElements:(id)a1 externalElements:(id)a2;
- (id)indexPathForHeadlineReferencedByBookmark:(id)a0 error:(id *)a1;
- (id)initWithArchive:(id)a0;
- (id)archiveWithPruning:(BOOL)a0 preserveBookmark:(id)a1;
- (id)internalIndexPathForBookmark:(id)a0;
- (id)externalIndexPathForBookmark:(id)a0;
- (void)enumerateInternalHeadlinesFromBookmark:(id)a0 toBookmark:(id)a1 withBlock:(id /* block */)a2;
- (id)bookmarkForFirstHeadline;
- (unsigned long long)numberOfHeadlinesConcealedByGap:(id)a0;
- (id)bookmarkForGroup:(id)a0 headline:(id)a1;

@end
