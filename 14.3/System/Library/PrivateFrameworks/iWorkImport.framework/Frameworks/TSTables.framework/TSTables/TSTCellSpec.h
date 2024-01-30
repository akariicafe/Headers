@class NSString;

@interface TSTCellSpec : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing>

@property (readonly, nonatomic) unsigned int interactionType;
@property (readonly, nonatomic) BOOL hasTSCEFormula;
@property (readonly, nonatomic) BOOL isControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithArchive:(const struct CellSpecArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaArchive *x4; struct Reference *x5; double x6; double x7; double x8; unsigned int x9; BOOL x10; BOOL x11; } *)a0 unarchiver:(id)a1;
+ (id)cellSpecFromTSKFormat:(id)a0;
+ (id)cellDiffProperties;
+ (id)defaultCellSpec;
+ (BOOL)interactionTypeIsControl:(unsigned int)a0;
+ (BOOL)isShimControlFormatType:(unsigned int)a0;
+ (unsigned int)interactionTypeForShimControlFormatType:(unsigned int)a0;
+ (unsigned int)shimControlFormatTypeForInteractionType:(unsigned int)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct CellSpecArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaArchive *x4; struct Reference *x5; double x6; double x7; double x8; unsigned int x9; BOOL x10; BOOL x11; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct CellSpecArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaArchive *x4; struct Reference *x5; double x6; double x7; double x8; unsigned int x9; BOOL x10; BOOL x11; } *)a0 archiver:(id)a1;
- (id)asChooserControlSpec;
- (id)initFromPropertyCommandMessage:(const struct Message { void /* function */ **x0; } *)a0 unarchiver:(id)a1;
- (void)saveToPropertyCommandMessage:(struct Message { void /* function */ **x0; } *)a0 archiver:(id)a1;
- (id)asFormulaSpec;
- (id)asRangeControlSpec;
- (BOOL)validateFormatAndValue:(id)a0;
- (id)objectByRemovingPropertiesInMap:(id)a0 addingPropertiesInMap:(id)a1 updateInverseResetPropertyMap:(id)a2 updateInverseSetPropertyMap:(id)a3;
- (BOOL)tst_dataObjectIsEqual:(id)a0;
- (unsigned long long)tst_dataObjectHash;
- (id)asToggleControlSpec;
- (id)propertiesMatchingThoseInMap:(id)a0;

@end
