@class NSString;
@protocol FCAssetDataProvider;

@interface StocksCore.StubAssetHandle : FCAssetHandle {
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, readonly) id<FCAssetDataProvider> dataProvider;
@property (nonatomic, readonly) NSString *uniqueKey;

- (id)init;
- (void).cxx_destruct;

@end
