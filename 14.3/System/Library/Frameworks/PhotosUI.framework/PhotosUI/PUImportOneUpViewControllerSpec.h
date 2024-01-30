@interface PUImportOneUpViewControllerSpec : PXFeatureSpec

@property (readonly, nonatomic) double interItemSpacing;
@property (readonly, nonatomic) struct CGSize { double width; double height; } selectionBadgeSize;
@property (readonly, nonatomic) struct UIOffset { double horizontal; double vertical; } selectionBadgeOffset;
@property (readonly, nonatomic) unsigned long long selectionBadgeCorner;
@property (readonly, nonatomic) BOOL allowsInterfaceRotation;
@property (readonly, nonatomic) unsigned long long style;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 style:(unsigned long long)a2;

@end
