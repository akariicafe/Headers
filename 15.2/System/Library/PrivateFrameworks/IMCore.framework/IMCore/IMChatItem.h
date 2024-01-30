@class NSString, IMItem;

@interface IMChatItem : NSObject <NSCopying> {
    IMItem *_item;
}

@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canReply;
@property (readonly, retain, nonatomic) NSString *balloonBundleID;
@property (readonly, nonatomic) long long syndicationBehavior;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic) long long syndicationType;

- (id)_item;
- (BOOL)itemIsReplyCount;
- (id)threadGroupIdentifier;
- (BOOL)isReplyContextPreview;
- (id)description;
- (id)_parentItem;
- (BOOL)itemIsReply;
- (BOOL)itemIsThreadOriginatorWithThreadIdentifier:(id *)a0;
- (void).cxx_destruct;
- (BOOL)itemIsReplyContextPreview;
- (BOOL)itemIsThreadOriginator;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithItem:(id)a0;
- (id)_timeStale;
- (id)_timeAdded;
- (void)_setTimeAdded:(id)a0;

@end
