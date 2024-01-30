@class UIImage, PXImportItemViewModel, UIView;

@interface PUImportOneUpTransitionItem : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialFrame;
@property (retain, nonatomic) UIImage *snapshotImage;
@property (readonly, nonatomic) PXImportItemViewModel *importItem;
@property (readonly, nonatomic) struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } indexPath;
@property (nonatomic) double initialContentAlpha;
@property (retain, nonatomic) UIView *transitionView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (nonatomic) double targetContentAlpha;

- (void).cxx_destruct;
- (id)initWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 snapshotImage:(id)a1 importItem:(id)a2 indexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a3;

@end
