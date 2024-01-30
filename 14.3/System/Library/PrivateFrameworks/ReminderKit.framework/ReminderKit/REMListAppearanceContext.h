@class REMList, REMListBadge, NSString;

@interface REMListAppearanceContext : NSObject

@property (retain, nonatomic) REMList *list;
@property (readonly, nonatomic) REMListBadge *badge;
@property (readonly, nonatomic) NSString *badgeEmblem;

- (void).cxx_destruct;
- (BOOL)showingLargeAttachments;
- (id)initWithList:(id)a0;

@end
