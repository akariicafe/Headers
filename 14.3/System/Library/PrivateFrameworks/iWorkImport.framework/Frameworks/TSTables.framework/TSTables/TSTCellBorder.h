@class NSString, TSDStroke;

@interface TSTCellBorder : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing, NSCopying> {
    BOOL _definedTopStrokeOrder;
    BOOL _definedRightStrokeOrder;
    BOOL _definedBottomStrokeOrder;
    BOOL _definedLeftStrokeOrder;
}

@property (readonly, nonatomic) BOOL definedTopStroke;
@property (readonly, nonatomic) BOOL definedLeftStroke;
@property (readonly, nonatomic) BOOL definedBottomStroke;
@property (readonly, nonatomic) BOOL definedRightStroke;
@property (readonly, retain, nonatomic) TSDStroke *topStroke;
@property (readonly, nonatomic) int topStrokeOrder;
@property (readonly, retain, nonatomic) TSDStroke *leftStroke;
@property (readonly, nonatomic) int leftStrokeOrder;
@property (readonly, retain, nonatomic) TSDStroke *bottomStroke;
@property (readonly, nonatomic) int bottomStrokeOrder;
@property (readonly, retain, nonatomic) TSDStroke *rightStroke;
@property (readonly, nonatomic) int rightStrokeOrder;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellBorder;
+ (id)cellDiffProperties;
+ (id)cellBorderForResettingAllStrokes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)saveToMessage:(struct CellBorderArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StrokeArchive *x4; struct StrokeArchive *x5; struct StrokeArchive *x6; struct StrokeArchive *x7; int x8; int x9; int x10; int x11; } *)a0 archiver:(id)a1;
- (void)didInitFromSOS;
- (id)initFromMessage:(const struct CellBorderArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct StrokeArchive *x4; struct StrokeArchive *x5; struct StrokeArchive *x6; struct StrokeArchive *x7; int x8; int x9; int x10; int x11; } *)a0 unarchiver:(id)a1;
- (id)initFromPropertyCommandMessage:(const struct Message { void /* function */ **x0; } *)a0 unarchiver:(id)a1;
- (void)saveToPropertyCommandMessage:(struct Message { void /* function */ **x0; } *)a0 archiver:(id)a1;
- (void)setTopStroke:(id)a0 order:(int)a1;
- (void)setLeftStroke:(id)a0 order:(int)a1;
- (void)setBottomStroke:(id)a0 order:(int)a1;
- (void)setRightStroke:(id)a0 order:(int)a1;
- (id)objectByRemovingPropertiesInMap:(id)a0 addingPropertiesInMap:(id)a1 updateInverseResetPropertyMap:(id)a2 updateInverseSetPropertyMap:(id)a3;
- (void)applyToCell:(id)a0;
- (void)_clearTopStroke;
- (void)_clearLeftStroke;
- (void)_clearBottomStroke;
- (void)_clearRightStroke;

@end
