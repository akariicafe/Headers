@class NSString, NSArray, FCAssetHandle;

@interface FCANFContent : NSObject

@property (readonly, nonatomic) FCAssetHandle *mainDocumentAssetHandle;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *fontResourceIDs;
@property (readonly, nonatomic) NSArray *anfDocumentAssetHandles;
@property (readonly, nonatomic) BOOL isANFDocumentCached;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 mainDocumentAssetHandle:(id)a1 fontResourceIDs:(id)a2;
- (id)fetchANFDocumentDataProviderWithPriority:(long long)a0 completion:(id /* block */)a1;
- (id)fetchANFDocumentDataProviderWithCompletion:(id /* block */)a0;

@end
