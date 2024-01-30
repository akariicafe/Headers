@class NSString, EMSearchableIndexTopHitsQuery, MUISearchSuggestionPhraseManager;

@interface MUISearchRankedSuggesterQuery : NSObject <MUISearchSuggesterQuery> {
    MUISearchSuggestionPhraseManager *_phraseManager;
    id /* block */ _handler;
    NSString *_bundleID;
    EMSearchableIndexTopHitsQuery *_topHitsQuery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;

@end
