@class NSArray, NSMutableArray, UIUpdateItem;

@interface UITableViewUpdateGap : NSObject {
    struct { unsigned char hasAutomaticAnimationItems : 1; } _gapFlags;
}

@property (retain, nonatomic) UIUpdateItem *firstUpdateItem;
@property (retain, nonatomic) UIUpdateItem *lastUpdateItem;
@property (readonly, nonatomic) NSArray *updateItems;
@property (readonly, nonatomic) NSMutableArray *deleteItems;
@property (readonly, nonatomic) NSMutableArray *insertItems;
@property (readonly, nonatomic) BOOL isDeleteBasedGap;
@property (readonly, nonatomic) BOOL hasInserts;
@property (readonly, nonatomic) BOOL isSectionBasedGap;
@property (readonly, nonatomic) BOOL hasAutomaticAnimationItems;

+ (id)gapWithUpdateItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)addUpdateItem:(id)a0;

@end
