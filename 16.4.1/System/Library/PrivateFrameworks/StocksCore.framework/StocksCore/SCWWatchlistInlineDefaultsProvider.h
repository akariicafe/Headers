@class SCWWatchlistDefaults;

@interface SCWWatchlistInlineDefaultsProvider : NSObject <SCWWatchlistDefaultsProviding> {
    SCWWatchlistDefaults *_defaults;
}

- (id)initWithDefaults:(id)a0;
- (void).cxx_destruct;
- (void)fetchWatchlistDefaultsWithCompletion:(id /* block */)a0;

@end
