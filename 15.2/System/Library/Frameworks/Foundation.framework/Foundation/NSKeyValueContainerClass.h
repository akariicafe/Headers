@interface NSKeyValueContainerClass : NSObject {
    Class _originalClass;
    void /* function */ *_cachedObservationInfoImplementation;
    void /* function */ *_cachedSetObservationInfoImplementation;
    BOOL _cachedSetObservationInfoTakesAnObject;
    struct { Class x0; Class x1; struct __CFSet *x2; struct __CFDictionary *x3; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x4; BOOL x5; } *_notifyingInfo;
}

- (id)initWithOriginalClass:(Class)a0;
- (id)description;

@end
