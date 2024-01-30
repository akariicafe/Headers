@class WebBookmarkCollection, WebBookmark;

@interface BAChangeRecord : NSObject

@property (readonly, nonatomic) WebBookmarkCollection *collection;
@property (readonly, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) int changeType;

- (id)description;
- (void).cxx_destruct;
- (id)_changedAttributeDescription;
- (id)_changeTypeDescription;
- (id)initWithBookmarkCollection:(id)a0 bookmark:(id)a1 changeType:(int)a2;

@end
