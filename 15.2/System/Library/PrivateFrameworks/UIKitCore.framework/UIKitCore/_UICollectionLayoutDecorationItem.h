@class NSString, _UICollectionLayoutAnchor;

@interface _UICollectionLayoutDecorationItem : _UICollectionLayoutItem <NSCopying, _UICollectionLayoutAPIRespresenting> {
    NSString *_elementKind;
    _UICollectionLayoutAnchor *_containerAnchor;
    Class _registrationViewClass;
    BOOL _isBackgroundDecoration;
}

@property (nonatomic) long long zIndex;
@property (retain, nonatomic, setter=_setRegistrationViewClass:) Class _registrationViewClass;

+ (id)backgroundDecorationItemWithElementKind:(id)a0;
+ (id)decorationItemWithSize:(id)a0 elementKind:(id)a1 containerAnchor:(id)a2;

- (id)initWithSize:(id)a0 elementKind:(id)a1 containerAnchor:(id)a2 zIndex:(long long)a3 contentInsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a4 edgeSpacing:(id)a5 name:(id)a6 registrationViewClass:(Class)a7 isBackgroundDecoration:(BOOL)a8;
- (id)_apiRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
