@class UIBarButtonItem;
@protocol SUNavigationItemDelegate;

@interface SUNavigationItem : UINavigationItem

@property (nonatomic) id<SUNavigationItemDelegate> delegate;
@property (retain, nonatomic) UIBarButtonItem *secondaryLeftBarButtonItem;

- (void)setLeftBarButtonItems:(id)a0 animated:(BOOL)a1;
- (void)setLeftBarButtonItem:(id)a0;
- (void)setLeftBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)setLeftBarButtonItems:(id)a0;
- (void)setSecondaryLeftBarButtonItem:(id)a0 animated:(BOOL)a1;

@end
