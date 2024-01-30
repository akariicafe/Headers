@class NSString, WebBookmarkList;

@interface SFSyntheticBookmarkFolder : NSObject

@property (retain, nonatomic) WebBookmarkList *bookmarkList;
@property (copy, nonatomic) NSString *title;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBookmarkList:(id)a0 title:(id)a1;

@end
