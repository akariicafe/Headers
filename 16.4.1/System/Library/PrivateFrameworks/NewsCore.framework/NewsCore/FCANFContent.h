@class NSString, NSArray, FCAssetHandle;

@interface FCANFContent : NSObject

@property (readonly, nonatomic) FCAssetHandle *mainDocumentAssetHandle;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *fontResourceIDs;
@property (readonly, nonatomic) NSArray *anfDocumentAssetHandles;
@property (readonly, nonatomic) BOOL isANFDocumentCached;

- (id)fetchANFDocumentDataProviderWithPriority:(long long)a0 completion:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 mainDocumentAssetHandle:(id)a1 fontResourceIDs:(id)a2;
- (id)fetchANFDocumentDataProviderWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
