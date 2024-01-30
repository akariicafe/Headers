@class PXGadgetSpec, NSString, NSIndexSet, PUAlbumListCellContentView, PUAlbumListCellContentViewHelper, PHCollection;
@protocol PUAlbumGadgetDelegate, PXGadgetDelegate;

@interface PUAlbumGadget : NSObject <PXDiagnosticsEnvironment, PXGadget>

@property (readonly, nonatomic) PUAlbumListCellContentViewHelper *albumListCellContentViewHelper;
@property (nonatomic, getter=isContentViewVisible) BOOL contentViewVisible;
@property (nonatomic) BOOL needsUpdate;
@property (retain, nonatomic) PHCollection *collection;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) PUAlbumListCellContentView *albumListCellContentView;
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
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleContentRect;

@end
