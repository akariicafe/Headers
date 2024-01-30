@interface StocksUI.LinkedStockProvider : NSObject <NULinkedContentProvider> {
    void /* unknown type, empty encoding */ metadataManager;
    void /* unknown type, empty encoding */ stocks;
}

- (id)loadLinkedContentForHeadline:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
