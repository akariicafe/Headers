@class NSString, NSArray, NSSet;
@protocol FCTagProviding;

@interface NewsUI2.ForYouMagazineFeedGroup : NSObject <FCForYouBridgedFeedGroup> {
    void /* unknown type, empty encoding */ group;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ headlines;
    void /* unknown type, empty encoding */ assetHandles;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *headlines;
@property (nonatomic, readonly) NSArray *assetHandles;
@property (nonatomic, readonly) NSSet *equivalentTopicIDs;
@property (nonatomic, readonly) NSArray *webEmbedURLs;
@property (nonatomic, readonly) id<FCTagProviding> backingTag;

- (id)init;
- (void).cxx_destruct;

@end
