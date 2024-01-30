@class MPCSharedListeningQueueEventContentAdded, MPCSharedListeningQueueEventContentReordered, MPCSharedListeningQueueEventContentRemoved, MPCSharedListeningQueueEventContentPlayedNow, MPCSharedListeningQueueEventContentUpdatedMessage, MPCSharedListeningQueueEventPlaybackModeChanged, MPCSharedListeningQueueEventContentReplaced;

@interface MPCSharedListeningQueueEvent : NSObject

@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) MPCSharedListeningQueueEventContentAdded *addedContent;
@property (readonly, nonatomic) MPCSharedListeningQueueEventContentRemoved *removedContent;
@property (readonly, nonatomic) MPCSharedListeningQueueEventContentReordered *reorderedContent;
@property (readonly, nonatomic) MPCSharedListeningQueueEventContentReplaced *replacedContent;
@property (readonly, nonatomic) MPCSharedListeningQueueEventContentPlayedNow *playedNowContent;
@property (readonly, nonatomic) MPCSharedListeningQueueEventContentUpdatedMessage *contentUpdatedMessage;
@property (readonly, nonatomic) MPCSharedListeningQueueEventPlaybackModeChanged *playbackMode;

+ (id)queueEventWithContentUpdatedMessage:(id)a0;
+ (id)queueEventWithPlaybackModeChanged:(id)a0;
+ (id)queueEventWithAddedContent:(id)a0;
+ (id)queueEventWithPlayedNowContent:(id)a0;
+ (id)queueEventWithRemovedContent:(id)a0;
+ (id)queueEventWithReorderedContent:(id)a0;
+ (id)queueEventWithReplacedContent:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
