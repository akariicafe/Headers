@class WebBookmarkCollection, WebBookmark;

@interface BABookmarkItem : NSObject

@property (readonly, nonatomic) WebBookmarkCollection *collection;
@property (retain, nonatomic) WebBookmark *bookmark;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBookmarkCollection:(id)a0 bookmark:(id)a1;

@end
