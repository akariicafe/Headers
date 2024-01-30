@class NSString, SKUIResourceLoader, SKUILockupSwooshArtworkLoader, SKUIMissingItemLoader, SKUIColorScheme, SKUILockupSwooshViewController, UIViewController, SKUISwooshPageComponent;

@interface SKUIProductPageTableSwooshSection : SKUIProductPageTableSection <SKUIMissingItemDelegate, SKUISwooshViewControllerDelegate> {
    SKUILockupSwooshArtworkLoader *_artworkLoader;
    SKUIMissingItemLoader *_missingItemLoader;
    SKUISwooshPageComponent *_swooshComponent;
    SKUILockupSwooshViewController *_swooshViewController;
}

@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (readonly, nonatomic) UIViewController *swooshViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)headerViewForTableView:(id)a0;
- (id)_missingItemLoader;
- (void)missingItemLoader:(id)a0 didLoadItems:(id)a1 invalidItemIdentifiers:(id)a2;
- (id)_swooshViewController;
- (id)_artworkLoader;
- (id)swoosh:(id)a0 imageForCellAtIndex:(long long)a1;
- (void)swoosh:(id)a0 didSelectCellAtIndex:(long long)a1;
- (id)initWithLockups:(id)a0 title:(id)a1;
- (id)initWithItems:(id)a0 title:(id)a1;

@end
