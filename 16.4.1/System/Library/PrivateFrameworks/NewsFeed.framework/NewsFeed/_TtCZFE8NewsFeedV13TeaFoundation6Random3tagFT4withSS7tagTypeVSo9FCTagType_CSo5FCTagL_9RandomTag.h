@class NSArray;

@interface _TtCZFE8NewsFeedV13TeaFoundation6Random3tagFT4withSS7tagTypeVSo9FCTagType_CSo5FCTagL_9RandomTag : FCTag

@property (nonatomic, readonly) NSArray *currentIssueIDs;

- (id)initChannelFromNotificationWithIdentifier:(id)a0 name:(id)a1 nameImageAssetHandle:(id)a2 nameImageMaskAssetHandle:(id)a3;
- (id)initWithTagType:(unsigned long long)a0 identifier:(id)a1 name:(id)a2;
- (id)initWithTagRecord:(id)a0 assetManager:(id)a1 interestToken:(id)a2;
- (id)initChannelForTestingWithIdentifier:(id)a0 name:(id)a1 publisherPaidBundlePurchaseIDs:(id)a2;
- (id)initWithData:(id)a0 context:(id)a1;
- (id)initForTestingWithTagType:(unsigned long long)a0 identifier:(id)a1 name:(id)a2 umcCanonicalID:(id)a3;
- (id)initWithTagMetadata:(id)a0 assetManager:(id)a1 isSports:(BOOL)a2;
- (id)initForTestingWithTagType:(unsigned long long)a0 identifier:(id)a1 name:(id)a2;
- (id)initChannelForTestingWithIdentifier:(id)a0 name:(id)a1 defaultSection:(id)a2 publisherAuthorizationURL:(id)a3 publisherVerificationURL:(id)a4;
- (id)init;

@end
