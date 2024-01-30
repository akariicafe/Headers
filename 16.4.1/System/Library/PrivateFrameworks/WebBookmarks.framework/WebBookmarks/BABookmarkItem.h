@class WebBookmarkCollection, WebBookmark;

@interface BABookmarkItem : NSObject

@property (readonly, nonatomic) WebBookmarkCollection *collection;
@property (retain, nonatomic) WebBookmark *bookmark;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBookmarkCollection:(id)a0 bookmark:(id)a1;

@end
