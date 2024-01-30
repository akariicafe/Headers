@class EDPBInteractionEventCategoryMarked, EDPBInteractionEventReadChanged, EDPBInteractionEventForwardSent, EDPBInteractionEventLinkClicked, EDPBInteractionEventMessageCopied, EDPBInteractionEventReplyDraftStarted, EDPBInteractionEventMarkedMuteThread, EDPBInteractionEventMessageFetched, EDPBInteractionEventForwardDraftStarted, EDPBInteractionEventMessageSent, EDPBInteractionEventMessageMoved, EDPBInteractionEventFlagChanged, EDPBInteractionEventAppResume, EDPBInteractionEventMessageViewEnd, EDPBInteractionEventMessageViewStart, EDPBInteractionEventReplySent, EDPBInteractionEventAppLaunch, EDPBInteractionEventCategoryInferred, EDPBInteractionEventAppBackground;

@interface EDPBInteractionEvent : PBCodable <EDPETMessageFrameTypeIntrospectable, EDPBDataSetters, NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char eventName : 1; unsigned char sequenceNumber : 1; } _has;
}

@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasEventName;
@property (nonatomic) int eventName;
@property (readonly, nonatomic) BOOL hasMessageFetched;
@property (retain, nonatomic) EDPBInteractionEventMessageFetched *messageFetched;
@property (readonly, nonatomic) BOOL hasMessageSent;
@property (retain, nonatomic) EDPBInteractionEventMessageSent *messageSent;
@property (readonly, nonatomic) BOOL hasMessageMoved;
@property (retain, nonatomic) EDPBInteractionEventMessageMoved *messageMoved;
@property (readonly, nonatomic) BOOL hasMessageCopied;
@property (retain, nonatomic) EDPBInteractionEventMessageCopied *messageCopied;
@property (readonly, nonatomic) BOOL hasLinkClicked;
@property (retain, nonatomic) EDPBInteractionEventLinkClicked *linkClicked;
@property (readonly, nonatomic) BOOL hasAppLaunch;
@property (retain, nonatomic) EDPBInteractionEventAppLaunch *appLaunch;
@property (readonly, nonatomic) BOOL hasAppBackground;
@property (retain, nonatomic) EDPBInteractionEventAppBackground *appBackground;
@property (readonly, nonatomic) BOOL hasAppResume;
@property (retain, nonatomic) EDPBInteractionEventAppResume *appResume;
@property (readonly, nonatomic) BOOL hasFlagChanged;
@property (retain, nonatomic) EDPBInteractionEventFlagChanged *flagChanged;
@property (readonly, nonatomic) BOOL hasReadChanged;
@property (retain, nonatomic) EDPBInteractionEventReadChanged *readChanged;
@property (readonly, nonatomic) BOOL hasMessageViewStart;
@property (retain, nonatomic) EDPBInteractionEventMessageViewStart *messageViewStart;
@property (readonly, nonatomic) BOOL hasMessageViewEnd;
@property (retain, nonatomic) EDPBInteractionEventMessageViewEnd *messageViewEnd;
@property (readonly, nonatomic) BOOL hasReplyDraftStarted;
@property (retain, nonatomic) EDPBInteractionEventReplyDraftStarted *replyDraftStarted;
@property (readonly, nonatomic) BOOL hasForwardDraftStarted;
@property (retain, nonatomic) EDPBInteractionEventForwardDraftStarted *forwardDraftStarted;
@property (readonly, nonatomic) BOOL hasReplySent;
@property (retain, nonatomic) EDPBInteractionEventReplySent *replySent;
@property (readonly, nonatomic) BOOL hasForwardSent;
@property (retain, nonatomic) EDPBInteractionEventForwardSent *forwardSent;
@property (readonly, nonatomic) BOOL hasMarkedMuteThread;
@property (retain, nonatomic) EDPBInteractionEventMarkedMuteThread *markedMuteThread;
@property (readonly, nonatomic) BOOL hasCategoryMarked;
@property (retain, nonatomic) EDPBInteractionEventCategoryMarked *categoryMarked;
@property (readonly, nonatomic) BOOL hasCategoryInferred;
@property (retain, nonatomic) EDPBInteractionEventCategoryInferred *categoryInferred;

- (void)forwardInvocation:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (int)messageFrameType;
- (id)ed_oneOfConcreteEvent;
- (id)eventNameAsString:(int)a0;
- (int)StringAsEventName:(id)a0;

@end
