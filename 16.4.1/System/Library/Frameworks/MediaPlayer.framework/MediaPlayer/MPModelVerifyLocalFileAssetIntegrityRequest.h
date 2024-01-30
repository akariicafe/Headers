@class MPModelFileAsset, MPIdentifierSet;

@interface MPModelVerifyLocalFileAssetIntegrityRequest : NSObject

@property (retain, nonatomic) MPIdentifierSet *sourceItemIdentifiers;
@property (retain, nonatomic) MPModelFileAsset *fileAsset;

+ (id)_operationQueue;

- (void)performWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)mediaLibraryForItemIdentifiers:(id)a0;
- (id)initWithFileAsset:(id)a0 sourceItemIdentifiers:(id)a1;

@end
