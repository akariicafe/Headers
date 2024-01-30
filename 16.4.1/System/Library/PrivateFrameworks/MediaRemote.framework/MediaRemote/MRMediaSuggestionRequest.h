@class NSUUID, NSString;

@interface MRMediaSuggestionRequest : NSObject <MRMediaSuggestionRequestConfigurable, NSCopying>

@property (nonatomic) unsigned long long maxResults;
@property (nonatomic) BOOL includeArtwork;
@property (copy, nonatomic) NSUUID *requestIdentifier;
@property (nonatomic) BOOL useDirectAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultRequestWithArtwork;
+ (id)defaultRequest;

- (void)performWithCompletion:(id /* block */)a0;
- (void)performWithPreferences:(id)a0 completion:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)performWithPreferences:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
