@class NSString, UIBezierPath, NSMutableDictionary, NSIndexPath;

@interface UICollectionViewLayoutAttributes : NSObject <NSCopying, UIDynamicItem> {
    NSString *_elementKind;
    NSString *_reuseIdentifier;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    long long _zPosition;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _maskViewFrame;
    NSMutableDictionary *_customAttributes;
    struct { unsigned char isCellKind : 1; unsigned char isDecorationView : 1; unsigned char isHidden : 1; unsigned char isClone : 1; unsigned char masksToBounds : 1; unsigned char maskedCorners : 4; unsigned char hasDefaultLayoutMargins : 1; unsigned char removeMaskViewAfterAnimation : 1; } _layoutFlags;
}

@property (nonatomic, getter=_masksToBounds, setter=_setMasksToBounds:) BOOL masksToBounds;
@property (nonatomic, getter=_maskedCorners, setter=_setMaskedCorners:) unsigned long long maskedCorners;
@property (nonatomic, getter=_cornerRadius, setter=_setCornerRadius:) double cornerRadius;
@property (nonatomic, getter=_hasMaskViewFrame) BOOL hasMaskViewFrame;
@property (readonly, nonatomic, getter=_maskViewFrame) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } maskViewFrame;
@property (readonly, nonatomic, getter=_removeMaskViewAfterAnimation) BOOL removeMaskViewAfterAnimation;
@property (readonly, nonatomic, getter=_hasDefaultLayoutMargins) BOOL hasDefaultLayoutMargins;
@property (nonatomic, getter=_defaultLayoutMargins, setter=_setDefaultLayoutMargins:) struct UIEdgeInsets { double top; double left; double bottom; double right; } defaultLayoutMargins;
@property (nonatomic, getter=_selectionGrouping, setter=_setSelectionGrouping:) unsigned long long selectionGrouping;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } transform3D;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic) double alpha;
@property (nonatomic) long long zIndex;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) unsigned long long representedElementCategory;
@property (readonly, nonatomic) NSString *representedElementKind;
@property (readonly, nonatomic) unsigned long long collisionBoundsType;
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)layoutAttributesForDecorationViewOfKind:(id)a0 withIndexPath:(id)a1;
+ (id)layoutAttributesForCellWithIndexPath:(id)a0;
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 withIndexPath:(id)a1;

- (BOOL)_isCell;
- (id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)a0 atIndexPath:(id)a1;
- (id)init;
- (void)_setZPosition:(long long)a0;
- (void).cxx_destruct;
- (BOOL)_isClone;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__elementKind;
- (BOOL)_isEquivalentTo:(id)a0;
- (long long)_zPosition;
- (BOOL)_isTransitionVisibleTo:(id)a0;
- (void)_setReuseIdentifier:(id)a0;
- (BOOL)_isSupplementaryView;
- (void)_setValue:(id)a0 forCustomAttribute:(id)a1;
- (id)_reuseIdentifier;
- (id)__indexPath;
- (BOOL)_isDecorationView;
- (void)_setMaskViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 removeAfterAnimation:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (id)_valueForCustomAttribute:(id)a0;
- (id)_elementKind;
- (void)_setElementKind:(id)a0;
- (void)_setIsClone:(BOOL)a0;
- (BOOL)isSizeEqualForPreferredFittingAttributes:(id)a0;

@end
