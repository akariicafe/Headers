@class NSURL, QLThumbnailGenerationRequest, FPItemID;

@interface SearchUIQuickLookThumbnailImage : SearchUIImage

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) FPItemID *fpItemID;
@property (weak) QLThumbnailGenerationRequest *request;
@property BOOL isCompact;

- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)updateSize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithSFImage:(id)a0;
- (id)initWithResult:(id)a0 url:(id)a1 isCompact:(BOOL)a2;

@end
