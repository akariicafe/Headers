@class REMSmartListChangeItem, NSString, REMListBadge, REMColor;

@interface REMSmartListCustomContextChangeItem : NSObject

@property (retain, nonatomic) REMSmartListChangeItem *smartListChangeItem;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) REMColor *color;
@property (copy, nonatomic) REMListBadge *badge;

- (void).cxx_destruct;
- (id)initWithSmartListChangeItem:(id)a0;

@end
