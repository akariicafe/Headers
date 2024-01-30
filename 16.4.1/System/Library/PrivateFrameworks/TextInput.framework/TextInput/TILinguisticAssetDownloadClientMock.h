@class NSError;

@interface TILinguisticAssetDownloadClientMock : NSObject <TILinguisticAssetDownloading>

@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) NSError *error;

- (id)initWithResult:(long long)a0 error:(id)a1;
- (void)removeLinguisticAssetsAssertionWithIdentifier:(id)a0 forClientID:(id)a1 withHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)addLinguisticAssetsAssertionForLanguage:(id)a0 assertionID:(id)a1 region:(id)a2 clientID:(id)a3 withHandler:(id /* block */)a4;
- (void)requestLinguisticAssetsForLanguage:(id)a0 completion:(id /* block */)a1;

@end
