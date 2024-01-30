@class Project, NSMutableDictionary, NSMutableArray;

@interface MBProjectClipsLoader : MBClipsLoader

@property (retain) NSMutableDictionary *identifierURLsToClipsMap;
@property (retain, nonatomic) Project *project;
@property (retain) NSMutableArray *assetURLs;

+ (BOOL)clipFormatValid:(id)a0 validateVideoFormat:(BOOL)a1;

- (id)clips;
- (void).cxx_destruct;
- (void)load;
- (void)dealloc;
- (void)projectMoviesDidChange:(id)a0;
- (void)projectDidCleanupUnusedMediaFiles:(id)a0;
- (void)removeClipWithURL:(id)a0;
- (id)initWithProject:(id)a0 showOnlyFavorites:(BOOL)a1;
- (void)loadClipAtPath:(id)a0;
- (void)projectDidUndoOrRedo:(id)a0;
- (long long)countForAllClips;

@end
