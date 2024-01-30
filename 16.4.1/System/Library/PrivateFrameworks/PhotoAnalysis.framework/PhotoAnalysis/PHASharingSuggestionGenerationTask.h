@class NSDictionary;

@interface PHASharingSuggestionGenerationTask : PHASuggestionGenerationTask {
    NSDictionary *_suggestionOptionsDictionary;
}

- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)currentPlatformIsSupported;
- (void).cxx_destruct;
- (id)name;
- (void)setSuggestionOptionsDictionary:(id)a0;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 reply:(id /* block */)a2;
- (id)suggestionOptionsDictionary;

@end
