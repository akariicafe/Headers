@class ICLiveLinkQueueEventContentReordered, ICLiveLinkQueueEventContentReplaced, ICLiveLinkQueueEventContentAdded, ICLiveLinkQueueEventContentUpdatedMessage, ICLiveLinkQueueEventPlaybackModeChanged, ICLiveLinkQueueEventContentPlayedNow, ICLiveLinkQueueEventContentRemoved;

@interface ICLiveLinkQueueEvent : NSObject

@property (readonly, nonatomic) long long kind;
@property (readonly, nonatomic) ICLiveLinkQueueEventContentAdded *contentAdded;
@property (readonly, nonatomic) ICLiveLinkQueueEventContentPlayedNow *contentPlayedNow;
@property (readonly, nonatomic) ICLiveLinkQueueEventContentRemoved *contentRemoved;
@property (readonly, nonatomic) ICLiveLinkQueueEventContentReordered *contentReordered;
@property (readonly, nonatomic) ICLiveLinkQueueEventContentReplaced *contentReplaced;
@property (readonly, nonatomic) ICLiveLinkQueueEventContentUpdatedMessage *contentUpdatedMessage;
@property (readonly, nonatomic) ICLiveLinkQueueEventPlaybackModeChanged *playbackModeChanged;

+ (id)queueEventWithContentPlayedNow:(id)a0;
+ (id)queueEventWithContentReordered:(id)a0;
+ (id)queueEventWithContentAdded:(id)a0;
+ (id)queueEventWithContentRemoved:(id)a0;
+ (id)queueEventWithContentReplaced:(id)a0;
+ (id)queueEventWithContentUpdatedMessage:(id)a0;
+ (id)queueEventWithPlaybackModeChanged:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
