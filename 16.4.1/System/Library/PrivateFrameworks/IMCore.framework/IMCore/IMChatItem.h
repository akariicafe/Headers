@class NSString, IMItem;

@interface IMChatItem : NSObject <NSCopying>

@property (retain, nonatomic) IMItem *item;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canReply;
@property (readonly, nonatomic) BOOL canRetract;
@property (readonly, nonatomic) BOOL canEditMessageText;
@property (readonly, retain, nonatomic) NSString *balloonBundleID;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, nonatomic) long long syndicationBehavior;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) long long syndicationType;
@property (readonly, nonatomic) BOOL wasDetonated;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_item;
- (id)_parentItem;
- (BOOL)isEditedMessageHistory;
- (BOOL)isReplyContextPreview;
- (BOOL)itemIsReply;
- (BOOL)itemIsReplyContextPreview;
- (BOOL)itemIsReplyCount;
- (BOOL)itemIsThreadOriginator;
- (BOOL)itemIsThreadOriginatorWithThreadIdentifier:(id *)a0;
- (id)threadGroupIdentifier;
- (id)_initWithItem:(id)a0;
- (void)_setTimeAdded:(id)a0;
- (id)_timeAdded;
- (id)_timeStale;

@end
