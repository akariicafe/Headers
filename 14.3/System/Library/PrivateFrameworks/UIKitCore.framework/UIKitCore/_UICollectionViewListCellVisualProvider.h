@class UICollectionViewListCell, UIView;

@interface _UICollectionViewListCellVisualProvider : NSObject {
    UICollectionViewListCell *_cell;
}

@property (readonly, nonatomic) long long defaultFocusStyle;
@property (readonly, nonatomic) BOOL canFocusProgrammatically;
@property (readonly, nonatomic) UIView *accessoryManagerContainerView;

- (id)initWithListCell:(id)a0;
- (void)configureFocusedFloatingContentView:(id)a0;

@end
