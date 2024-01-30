@class NSIndexSet, NSObject;

@interface NSKeyValueChangeDictionary : NSDictionary {
    struct { unsigned long long kind; NSObject *oldValue; NSObject *newValue; NSIndexSet *indexes; id extraData; } _details;
    NSObject *_originalObservable;
    BOOL _isPriorNotification;
    BOOL _isRetainingObjects;
}

- (void)setDetailsNoCopy:(struct { unsigned long long x0; id x1; id x2; id x3; id x4; })a0 originalObservable:(id)a1;
- (id)keyEnumerator;
- (id)initWithDetailsNoCopy:(struct { unsigned long long x0; id x1; id x2; id x3; id x4; })a0 originalObservable:(id)a1 isPriorNotification:(BOOL)a2;
- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (void)setOriginalObservable:(id)a0;
- (void)dealloc;
- (void)retainObjects;

@end
