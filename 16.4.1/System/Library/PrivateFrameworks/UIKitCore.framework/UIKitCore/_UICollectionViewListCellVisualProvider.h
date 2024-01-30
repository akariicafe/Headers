@class UICollectionViewListCell, UIView;

@interface _UICollectionViewListCellVisualProvider : NSObject {
    UICollectionViewListCell *_cell;
}

@property (readonly, nonatomic) long long defaultFocusStyle;
@property (readonly, nonatomic) BOOL canFocusProgrammatically;
@property (readonly, nonatomic) UIView *accessoryManagerContainerView;

- (void)configureFocusedFloatingContentView:(id)a0;
- (id)initWithListCell:(id)a0;

@end
