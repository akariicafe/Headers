@class NSString, NSURL, WBSCRDTPosition, WBLocalTabAttributes;

@interface WBMutableTab : WBTab <NSCopying>

@property (nonatomic, getter=wasModified) BOOL modified;
@property (nonatomic, getter=wasAdded) BOOL added;
@property (nonatomic, getter=wasMoved) BOOL moved;
@property (copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (nonatomic) int orderIndex;
@property (retain, nonatomic) WBLocalTabAttributes *localAttributes;
@property (copy, nonatomic) NSString *tabGroupUUID;
@property (nonatomic, getter=isLocal) BOOL local;
@property (nonatomic, getter=isPrivateBrowsing) BOOL privateBrowsing;
@property (nonatomic, getter=isShared) BOOL shared;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSURL *localURL;
@property (copy, nonatomic) NSURL *syncableURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *localTitle;
@property (copy, nonatomic) NSString *syncableTitle;

- (void)setLocal:(BOOL)a0;
- (void)setShared:(BOOL)a0;
- (void)setSyncable:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setModified:(BOOL)a0;
- (void)setAdded:(BOOL)a0;
- (void)setUrl:(id)a0;
- (void)setTitle:(id)a0;
- (void)setOrderIndex:(int)a0;
- (void)setPrivateBrowsing:(BOOL)a0;
- (void)setTabGroupUUID:(id)a0;
- (void)setLocalAttributes:(id)a0;
- (void)adoptAttributesFromTab:(id)a0;
- (void)didRemoveFromTabGroup;
- (void)markAsRead;
- (void)setPinned:(BOOL)a0 title:(id)a1 url:(id)a2;
- (void)setSyncableURL:(id)a0;
- (void)_setPropertiesFromTabGroup:(id)a0;
- (void)didInsertIntoTabGroup:(id)a0;
- (void)markClean;
- (void)mergeWithTab:(id)a0;
- (void)setMoved:(BOOL)a0;
- (void)setSyncPosition:(id)a0;
- (void)setURL:(id)a0 shouldSync:(BOOL)a1;

@end
