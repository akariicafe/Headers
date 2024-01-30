@class NSString;
@protocol FCAssetDataProvider;

@interface NewsFeed.StubAssetHandle : FCAssetHandle {
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, readonly) id<FCAssetDataProvider> dataProvider;
@property (nonatomic, readonly) NSString *uniqueKey;

- (void).cxx_destruct;
- (id)init;

@end
