@class WebBookmarkCollection, WebBookmark;

@interface WBChangeRecord : NSObject

@property (readonly, nonatomic) WebBookmarkCollection *collection;
@property (readonly, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) int changeType;
@property (readonly, nonatomic) long long localRecordGeneration;

- (id)description;
- (void).cxx_destruct;
- (id)_changeTypeDescription;
- (id)_changedAttributeDescription;
- (id)initWithBookmarkCollection:(id)a0 bookmark:(id)a1 changeType:(int)a2 localRecordGeneration:(long long)a3;

@end
