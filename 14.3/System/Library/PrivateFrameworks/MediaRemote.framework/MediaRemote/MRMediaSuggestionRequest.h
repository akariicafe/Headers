@class NSUUID;

@interface MRMediaSuggestionRequest : NSObject

@property (nonatomic) unsigned long long maxResults;
@property (nonatomic) BOOL includeArtwork;
@property (copy, nonatomic) NSUUID *requestIdentifier;

+ (id)defaultRequest;
+ (id)defaultRequestWithArtwork;

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (void)performWithPreferences:(id)a0 completion:(id /* block */)a1;
- (id)_proactiveSuggestion;
- (id)_queryEventsWithPredicate:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_intentIsValidSuggestion:(id)a0 sourceBundleID:(id)a1;
- (void)_artworkForIntent:(id)a0 completion:(id /* block */)a1;
- (BOOL)_bundleIdentifierIsSystemMediaApplication:(id)a0;

@end
