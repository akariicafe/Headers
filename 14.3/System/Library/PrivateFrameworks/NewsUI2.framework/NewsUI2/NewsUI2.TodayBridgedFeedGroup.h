@class NSArray, NSSet, NSString;
@protocol FCTagProviding;

@interface NewsUI2.TodayBridgedFeedGroup : _TtCs12_SwiftObject <FCForYouBridgedFeedGroup> {
    void /* unknown type, empty encoding */ group;
    void /* unknown type, empty encoding */ emitter;
}

@property (nonatomic, readonly) NSArray *assetHandles;
@property (nonatomic, readonly) NSArray *headlines;
@property (nonatomic, readonly) NSArray *webEmbedURLs;
@property (nonatomic, readonly) NSSet *equivalentTopicIDs;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id<FCTagProviding> backingTag;

@end
