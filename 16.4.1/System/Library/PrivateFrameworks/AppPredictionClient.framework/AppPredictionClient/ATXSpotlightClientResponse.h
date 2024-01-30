@class NSArray;

@interface ATXSpotlightClientResponse : NSObject {
    NSArray *_scores;
    unsigned long long _signpostId;
}

@property (readonly, nonatomic) NSArray *topics;
@property (readonly, nonatomic) NSArray *sections;

+ (id)_createEmptyResultsWithCount:(unsigned long long)a0;
+ (unsigned long long)_indexOfFirstSpotlightRecentInServerResults:(id)a0 withSections:(id)a1;
+ (id)_limitingResults:(id)a0 scores:(id)a1 spotlightRecentIndex:(unsigned long long)a2 limit:(unsigned long long)a3;
+ (void)_processContextTitleFootnote:(id)a0;
+ (id)_removeDuplicates:(id)a0;
+ (id)_resultForError:(id)a0 subtitles:(id)a1;
+ (id)createSectionWithTitle:(id)a0 sectionBundleIdentifier:(id)a1 resultCount:(unsigned long long)a2;

- (id)initWithTopics:(id)a0 scores:(id)a1 sections:(id)a2;
- (id)createSectionsFromServerResults:(id)a0;
- (id)_replaceMissingWithError:(id)a0;
- (void)dealloc;
- (id)_createSectionsFromServerResults:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
