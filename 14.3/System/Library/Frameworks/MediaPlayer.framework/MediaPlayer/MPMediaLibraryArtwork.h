@class NSArray, ML3Artwork, NSURL, NSDictionary, MPMediaLibraryArtworkRequest;

@interface MPMediaLibraryArtwork : NSObject

@property (weak, nonatomic) MPMediaLibraryArtworkRequest *artworkRequest;
@property (retain, nonatomic) ML3Artwork *artwork;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateLock;
@property (readonly, nonatomic) NSArray *validSizes;
@property (readonly, copy, nonatomic) NSURL *originalFileURL;
@property (copy, nonatomic) NSDictionary *effectsMetadata;

+ (BOOL)artworkExistsForRequest:(id)a0;
+ (BOOL)needsToFetchArtworkForRequest:(id)a0;
+ (id)availableArtworkWithRequest:(id)a0;
+ (void)fetchArtworkForRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (void)cancelFetchingArtworkForRequest:(id)a0;
+ (void)fetchArtworkInfoForRequest:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)imageFileURLForSize:(struct CGSize { double x0; double x1; })a0;
- (id)imageFileURLForEffect:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
