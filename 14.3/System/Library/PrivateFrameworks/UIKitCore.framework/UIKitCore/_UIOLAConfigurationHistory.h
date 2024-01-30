@class NSSet, NSMapTable, NSString;

@interface _UIOLAConfigurationHistory : _UILAConfigurationHistory <_UIOLAPropertySource>

@property (nonatomic) BOOL hasEstablishedOrderingValues;
@property (nonatomic, getter=isInOrderedArrangementUpdateSection) BOOL inOrderedArrangementUpdateSection;
@property (nonatomic) double proportionalFillDenominator;
@property (nonatomic) double spacing;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;
@property (nonatomic) long long distribution;
@property (nonatomic, setter=_setItemOrderingChanged:) BOOL _itemOrderingChanged;
@property (nonatomic, setter=_setItemFittingSizeChanged:) BOOL _itemFittingSizeChanged;
@property (readonly, nonatomic) NSMapTable *customSpacings;
@property (nonatomic) long long axis;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)customSpacingAfterItem:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCustomSpacing:(double)a0 afterItem:(id)a1;

@end
