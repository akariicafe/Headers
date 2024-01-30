@class NSError;

@interface TILinguisticAssetDownloadClientMock : NSObject <TILinguisticAssetDownloading>

@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) NSError *error;

- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)a0 forClientID:(id)a1 withHandler:(id /* block */)a2;
- (void)addLinguisticAssetsAssertionForLanguage:(id)a0 assertionID:(id)a1 region:(id)a2 clientID:(id)a3 withHandler:(id /* block */)a4;
- (void)requestLinguisticAssetsForLanguage:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithResult:(long long)a0 error:(id)a1;
- (id)init;

@end
