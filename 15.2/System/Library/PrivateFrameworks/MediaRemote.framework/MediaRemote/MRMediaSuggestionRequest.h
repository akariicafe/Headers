@class NSUUID;

@interface MRMediaSuggestionRequest : NSObject <NSCopying>

@property (nonatomic) unsigned long long maxResults;
@property (nonatomic) BOOL includeArtwork;
@property (copy, nonatomic) NSUUID *requestIdentifier;
@property (nonatomic) BOOL useDirectAccess;

+ (id)defaultRequest;
+ (id)defaultRequestWithArtwork;

- (void)performWithCompletion:(id /* block */)a0;
- (id)description;
- (void)performWithPreferences:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
