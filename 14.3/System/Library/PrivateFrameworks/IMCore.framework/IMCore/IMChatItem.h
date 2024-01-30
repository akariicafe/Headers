@class NSString, IMItem;

@interface IMChatItem : NSObject <NSCopying> {
    IMItem *_item;
}

@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canReply;
@property (readonly, retain, nonatomic) NSString *balloonBundleID;

- (id)_item;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)itemIsReply;
- (BOOL)itemIsReplyContextPreview;
- (BOOL)itemIsThreadOriginator;
- (id)description;
- (BOOL)isReplyContextPreview;
- (id)threadGroupIdentifier;
- (BOOL)itemIsThreadOriginatorWithThreadIdentifier:(id *)a0;
- (BOOL)itemIsReplyCount;
- (id)_parentItem;
- (id)_initWithItem:(id)a0;
- (id)_timeStale;
- (id)_timeAdded;
- (void)_setTimeAdded:(id)a0;

@end
