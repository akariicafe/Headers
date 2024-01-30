@class NSDictionary, WebBookmark;

@interface WebBookmarkChange : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) int bookmarkID;
@property (nonatomic) int parentID;
@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) unsigned long long modifiedAttributes;

+ (id)bookmarkAddChangeWithBookmark:(id)a0;
+ (id)bookmarkModifyChangeWithBookmark:(id)a0;

- (BOOL)attributesMarkedAsModify:(unsigned long long)a0;
- (id)initWithBookmark:(id)a0 bookmarkID:(int)a1 parentID:(int)a2 changeType:(long long)a3;
- (void)_setModifiedAttributesIfSupported;
- (id)initWithBookmarkID:(int)a0 parentID:(int)a1 changeType:(long long)a2;
- (void)applyModificationsToBookmark:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;

@end
