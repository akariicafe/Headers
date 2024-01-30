@class PXAssetCollectionActionManager, NSString, NSIndexSet, PXGadgetSpec, PUAlbumListCellContentView, PUAlbumListCellContentViewHelper, PHCollection;
@protocol PUAlbumGadgetDelegate, PXGadgetDelegate;

@interface PUAlbumGadget : NSObject <PXDiagnosticsEnvironment, PXGadget>

@property (readonly, nonatomic) PUAlbumListCellContentViewHelper *albumListCellContentViewHelper;
@property (nonatomic, getter=isContentViewVisible) BOOL contentViewVisible;
@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) double lastPreferredHeight;
@property (retain, nonatomic) PHCollection *collection;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) PUAlbumListCellContentView *albumListCellContentView;
@property (readonly, nonatomic) PXAssetCollectionActionManager *actionManager;
@property (weak, nonatomic) id<PUAlbumGadgetDelegate> albumGadgetDelegate;
@property (copy, nonatomic) NSIndexSet *indexesOfHiddenStackItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL wantsMultilineTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateContent;
- (id)previewViewControllerAtLocation:(struct CGPoint { double x0; double x1; })a0 fromSourceView:(id)a1;
- (id)contextMenuWithSuggestedActions:(id)a0;
- (id)init;
- (id)contentView;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void).cxx_destruct;
- (id)targetPreviewViewForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (long long)estimatedIndexInCollection:(id)a0 ofAssetForStackItemAtIndex:(long long)a1;
- (id)initWithCollection:(id)a0 albumGadgetDelegate:(id)a1;
- (void)reconfigure;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForStackItemAtIndex:(long long)a0 inCoordinateSpace:(id)a1;

@end
