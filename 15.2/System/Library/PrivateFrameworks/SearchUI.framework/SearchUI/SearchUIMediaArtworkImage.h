@class NSString;

@interface SearchUIMediaArtworkImage : SearchUIImage

@property (retain) NSString *persistentID;
@property (retain) NSString *universalLibraryID;
@property (retain) NSString *spotlightIdentifier;
@property long long mediaEntityType;

- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (unsigned long long)hash;
- (id)initWithSFImage:(id)a0;
- (id)initWithSpotlightIdentifier:(id)a0;

@end
