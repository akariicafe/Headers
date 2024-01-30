@class NSDictionary;

@interface PHASharingSuggestionGenerationTask : PHASuggestionGenerationTask {
    NSDictionary *_suggestionOptionsDictionary;
}

- (void).cxx_destruct;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)name;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 reply:(id /* block */)a2;
- (id)suggestionOptionsDictionary;
- (void)setSuggestionOptionsDictionary:(id)a0;

@end
