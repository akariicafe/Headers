@class NSString;

@interface SearchUIMediaArtworkImage : SearchUIImage

@property (retain) NSString *persistentID;
@property (retain) NSString *universalLibraryID;
@property (retain) NSString *spotlightIdentifier;
@property long long mediaEntityType;

- (void).cxx_destruct;
- (id)initWithSpotlightIdentifier:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)initWithSFImage:(id)a0;
- (void)loadImageWithCompletionHandler:(id /* block */)a0;

@end
