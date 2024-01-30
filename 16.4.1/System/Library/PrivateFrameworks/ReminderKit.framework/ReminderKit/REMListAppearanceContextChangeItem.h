@class REMListBadge, NSString, REMListChangeItem;

@interface REMListAppearanceContextChangeItem : NSObject

@property (retain, nonatomic) REMListChangeItem *listChangeItem;
@property (copy, nonatomic) REMListBadge *badge;
@property (copy, nonatomic) NSString *badgeEmblem;

- (BOOL)showingLargeAttachments;
- (void)setShowingLargeAttachments:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithListChangeItem:(id)a0;

@end
