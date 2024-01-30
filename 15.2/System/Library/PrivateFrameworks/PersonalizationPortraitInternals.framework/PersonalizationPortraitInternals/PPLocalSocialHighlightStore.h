@class PPSocialHighlightStorage;

@interface PPLocalSocialHighlightStore : NSObject {
    PPSocialHighlightStorage *_storage;
}

+ (id)defaultStore;

- (id)initWithStorage:(id)a0;
- (id)rankedHighlightsForSyncedItems:(id)a0 client:(id)a1 variant:(id)a2 applicationIdentifiers:(id)a3 error:(id *)a4;
- (void).cxx_destruct;
- (id)init;
- (id)attributionForIdentifier:(id)a0 error:(id *)a1;
- (id)rankedHighlightsWithLimit:(unsigned long long)a0 client:(id)a1 variant:(id)a2 applicationIdentifiers:(id)a3 error:(id *)a4;
- (BOOL)feedbackForHighlight:(id)a0 type:(unsigned long long)a1 client:(id)a2 variant:(id)a3 error:(id *)a4;
- (BOOL)feedbackForAttribution:(id)a0 type:(unsigned long long)a1 client:(id)a2 variant:(id)a3 error:(id *)a4;

@end
