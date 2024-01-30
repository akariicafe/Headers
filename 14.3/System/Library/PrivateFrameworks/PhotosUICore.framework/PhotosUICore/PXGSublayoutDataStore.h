@class NSString;

@interface PXGSublayoutDataStore : NSObject <PXGDiagnosticsProvider> {
    long long _capacity;
}

@property (nonatomic) long long count;
@property (readonly, nonatomic) struct { struct CGSize { double x0; double x1; } x0; unsigned short x1; struct CGSize { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; double x1; } x4; double x5; } *geometries;
@property (readonly, nonatomic) struct { void *x0; void *x1; } *infos;
@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_insertRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateSublayoutsUsingBlock:(id /* block */)a0;
- (void)removeSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)dealloc;
- (id)sublayoutProviderAtIndex:(long long)a0;
- (void)enumerateSublayoutGeometriesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)insertSublayout:(id)a0 atIndex:(long long)a1;
- (void)enumerateSublayoutGeometriesUsingBlock:(id /* block */)a0;
- (unsigned int)spriteIndexOriginForSublayout:(id)a0;
- (id)sublayoutAtIndex:(long long)a0;
- (void)insertSublayoutProvider:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_invalidateVersion;
- (void)enumerateSublayoutsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (struct { struct CGSize { double x0; double x1; } x0; unsigned short x1; struct CGSize { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; double x1; } x4; double x5; })geometryForSublayout:(id)a0;
- (long long)indexOfSublayout:(id)a0;

@end
