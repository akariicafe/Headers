@class QLThumbnailGenerationRequest, SFSearchResult;

@interface SearchUIQuickLookThumbnailImage : SearchUIImage

@property (retain, nonatomic) SFSearchResult *result;
@property (weak) QLThumbnailGenerationRequest *request;
@property BOOL isCompact;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)url;
- (BOOL)isEqual:(id)a0;
- (id)initWithResult:(id)a0 isCompact:(BOOL)a1;
- (Class)classForCoder;
- (void)loadImageWithCompletionHandler:(id /* block */)a0;

@end
