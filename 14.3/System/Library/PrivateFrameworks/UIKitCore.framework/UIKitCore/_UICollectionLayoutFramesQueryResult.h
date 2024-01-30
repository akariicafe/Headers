@class NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSUUID;
@protocol _UICollectionLayoutAuxillaryItem;

@interface _UICollectionLayoutFramesQueryResult : NSObject <_UICollectionLayoutFramesQueryResult, NSCopying>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly, nonatomic) long long index;
@property (readonly, nonatomic) long long zIndex;
@property (readonly, nonatomic) long long effectiveZIndex;
@property (readonly, nonatomic) long long resultKind;
@property (readonly, nonatomic) NSCollectionLayoutItem *item;
@property (readonly, nonatomic) NSCollectionLayoutSupplementaryItem *supplementaryItem;
@property (readonly, nonatomic) id<_UICollectionLayoutAuxillaryItem> auxillaryItem;
@property (readonly, nonatomic) long long auxillaryKind;
@property (readonly, nonatomic) NSUUID *supplementaryEnrollmentIdentifier;
@property (readonly, nonatomic) BOOL isSupplementary;
@property (readonly, nonatomic) BOOL isDecoration;
@property (readonly, nonatomic) BOOL isAuxillary;
@property (readonly, nonatomic) BOOL isItem;
@property (readonly, nonatomic) BOOL isAuxillaryKindGlobal;
@property (readonly, nonatomic) BOOL isAuxillaryKindSection;
@property (readonly, nonatomic) BOOL isAuxillaryKindGroup;
@property (readonly, nonatomic) BOOL isAuxillaryKindItem;

+ (id)kindIndexKeyForKind:(id)a0 index:(long long)a1;

- (id)copyWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1 zIndex:(long long)a2 resultKind:(long long)a3 item:(id)a4;
- (id)copyWithOffset:(struct CGPoint { double x0; double x1; })a0 index:(long long)a1 supplementaryEnrollmentIdentifier:(id)a2;
- (id)description;
- (id)copyWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (id)kindIndexKey;
- (id)copyWithIndex:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 index:(long long)a1 zIndex:(long long)a2 resultKind:(long long)a3 item:(id)a4 auxillaryKind:(long long)a5 supplementaryEnrollmentIdentifier:(id)a6;

@end
