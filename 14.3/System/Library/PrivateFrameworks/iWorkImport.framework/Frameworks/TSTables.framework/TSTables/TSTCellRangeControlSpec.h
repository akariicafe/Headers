@interface TSTCellRangeControlSpec : TSTCellSpec {
    unsigned int _interactionType;
}

@property (readonly, nonatomic) double minimum;
@property (readonly, nonatomic) double maximum;
@property (readonly, nonatomic) double increment;
@property (readonly, nonatomic) unsigned int legacyDisplayFormatType;

+ (id)instanceWithArchive:(const struct CellSpecArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaArchive *x4; struct Reference *x5; double x6; double x7; double x8; unsigned int x9; BOOL x10; BOOL x11; } *)a0 unarchiver:(id)a1;
+ (BOOL)legalRangeControlMinimum:(double)a0 maximum:(double)a1 increment:(double)a2;
+ (id)defaultRangeControlSpecOfType:(unsigned int)a0;
+ (double)defaultCellValueForInteractionType:(unsigned int)a0;
+ (id)stepperSpecWithMinimum:(double)a0 maximum:(double)a1 increment:(double)a2;
+ (id)sliderSpecWithMinimum:(double)a0 maximum:(double)a1 increment:(double)a2;
+ (id)cellSpecFromTSKFormat:(id)a0;

- (unsigned long long)hash;
- (unsigned int)interactionType;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct CellSpecArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaArchive *x4; struct Reference *x5; double x6; double x7; double x8; unsigned int x9; BOOL x10; BOOL x11; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct CellSpecArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct FormulaArchive *x4; struct Reference *x5; double x6; double x7; double x8; unsigned int x9; BOOL x10; BOOL x11; } *)a0 archiver:(id)a1;
- (id)initWithInteractionType:(unsigned int)a0 minimum:(double)a1 maximum:(double)a2 increment:(double)a3;
- (double)recomputedValueFromValue:(double)a0 changed:(BOOL *)a1;
- (id)asRangeControlSpec;
- (double)valueFromString:(id)a0 locale:(id)a1;
- (BOOL)validateFormatAndValue:(id)a0;
- (id)tskStepperSliderFormatWithDisplayFormatType:(unsigned int)a0;

@end
