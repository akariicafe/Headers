@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject

@property (copy, nonatomic) id catalogIdentifier;
@property (nonatomic) struct CGSize { double width; double height; } representationSize;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithArtworkCatalog:(id)a0 representativeSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isEqual:(id)a0;

@end
