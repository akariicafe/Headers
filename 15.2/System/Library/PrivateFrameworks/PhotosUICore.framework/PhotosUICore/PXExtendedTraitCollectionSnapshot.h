@interface PXExtendedTraitCollectionSnapshot : NSObject

@property (readonly, nonatomic) long long layoutSizeClass;
@property (readonly, nonatomic) long long layoutSizeSubclass;
@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly, nonatomic) long long layoutDirection;
@property (readonly, nonatomic) long long contentSizeCategory;
@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (readonly, nonatomic) long long userInterfaceFeature;
@property (readonly, nonatomic) struct CGSize { double width; double height; } layoutReferenceSize;
@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } peripheryInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long userInterfaceLevel;
@property (readonly, nonatomic) struct CGSize { double width; double height; } windowReferenceSize;
@property (readonly, nonatomic) long long windowOrientation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fullScreenReferenceRect;

- (id)_initWithExtendedTraitCollection:(id)a0;

@end
