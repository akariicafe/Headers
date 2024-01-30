@class REMList, REMListBadge, NSString;

@interface REMListAppearanceContext : NSObject

@property (retain, nonatomic) REMList *list;
@property (readonly, nonatomic) REMListBadge *badge;
@property (readonly, nonatomic) NSString *badgeEmblem;

- (BOOL)showingLargeAttachments;
- (void).cxx_destruct;
- (id)initWithList:(id)a0;

@end
