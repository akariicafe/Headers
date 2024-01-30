@interface _MPMediaLibraryArtworkDataSourceCacheKey : NSObject

@property (copy, nonatomic) id catalogIdentifier;
@property (nonatomic) struct CGSize { double width; double height; } representationSize;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithArtworkCatalog:(id)a0 representativeSize:(struct CGSize { double x0; double x1; })a1;

@end
