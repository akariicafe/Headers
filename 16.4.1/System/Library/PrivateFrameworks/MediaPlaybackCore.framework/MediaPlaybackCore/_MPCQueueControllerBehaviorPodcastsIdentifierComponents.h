@class NSString;

@interface _MPCQueueControllerBehaviorPodcastsIdentifierComponents : NSObject <MPCQueueControllerItemIdentifierComponents> {
    void /* unknown type, empty encoding */ contentItemID;
    void /* unknown type, empty encoding */ sectionID;
    void /* unknown type, empty encoding */ itemID;
}

@property (nonatomic, copy) NSString *contentItemID;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, copy) NSString *itemID;
@property (nonatomic) void /* unknown type, empty encoding */ isPlaceholder;
@property (nonatomic, readonly) unsigned short behaviorFlags;

- (id)init;
- (void).cxx_destruct;

@end
