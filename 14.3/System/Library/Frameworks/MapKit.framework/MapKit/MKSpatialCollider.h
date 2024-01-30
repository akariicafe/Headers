@class _MKSpatialColliderPairSet, __end_cap_, __end_;

@interface MKSpatialCollider : NSObject <NSFastEnumeration> {
    long long _options;
    _MKSpatialColliderPairSet *_previousCollisionPairs;
    _MKSpatialColliderPairSet *_registeredCollisonPairs;
    BOOL _isVertical;
    struct vector<MKAnnotationView *, std::__1::allocator<MKAnnotationView *> > { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<MKAnnotationView **, std::__1::allocator<MKAnnotationView *> > { id *__value_; } x1; } _sortedAnnotationViews;
    double _maxLength;
    unsigned long long mutator;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)annotationViewAtIndex:(unsigned long long)a0;
- (id)initWithAnnotationViews:(id)a0 previousCollissions:(id)a1 options:(long long)a2;
- (id)registeredCollissions;
- (id)viewsCollidingWithAnnotationView:(id)a0 inCollidableList:(BOOL)a1 fromIndex:(long long)a2 length:(double)a3;
- (unsigned long long)viewCount;
- (id).cxx_construct;
- (id)viewsCollidingWithAnnotationViewAtIndex:(unsigned long long)a0;
- (unsigned long long)insertAnnotationView:(id)a0;
- (id)viewsCollidingWithAnnotationView:(id)a0 inCollidableList:(BOOL)a1;

@end
