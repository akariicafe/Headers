@class UICollectionViewCell, NSIndexPath;

@interface UICollectionViewReorderedItem : NSObject

@property (readonly, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) NSIndexPath *originalIndexPath;
@property (retain, nonatomic) NSIndexPath *targetIndexPath;
@property (nonatomic) BOOL pinned;
@property (nonatomic) struct CGPoint { double x; double y; } pinnedPreviousContentOffset;
@property (copy, nonatomic) id /* block */ pinningTest;

- (BOOL)isNOOP;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCell:(id)a0 indexPath:(id)a1;

@end
