@class NSURL, NSMutableArray;

@interface MSVArtworkServiceResizeRequest : MSVArtworkServiceRequest

@property (retain, nonatomic) NSMutableArray *resizeDestinations;
@property (copy, nonatomic) NSURL *sourceURL;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (Class)operationClass;
- (id)initWithSourceURL:(id)a0;
- (void)addDestinationWithFormat:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 url:(id)a2;
- (void)addJPEGDestinationWithSize:(struct CGSize { double x0; double x1; })a0 compressionQuality:(double)a1 url:(id)a2;
- (void)enumerateDestinationsUsingBlock:(id /* block */)a0;

@end
