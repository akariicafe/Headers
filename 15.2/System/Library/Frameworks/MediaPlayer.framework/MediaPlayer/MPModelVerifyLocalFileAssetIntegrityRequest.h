@class MPModelFileAsset, MPIdentifierSet;

@interface MPModelVerifyLocalFileAssetIntegrityRequest : NSObject

@property (retain, nonatomic) MPIdentifierSet *sourceItemIdentifiers;
@property (retain, nonatomic) MPModelFileAsset *fileAsset;

+ (id)_operationQueue;

- (id)initWithFileAsset:(id)a0 sourceItemIdentifiers:(id)a1;
- (id)mediaLibraryForItemIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)performWithResponseHandler:(id /* block */)a0;

@end
