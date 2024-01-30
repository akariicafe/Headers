@class NSIndexSet, NSObject;

@interface NSKeyValueChangeDictionary : NSDictionary {
    struct { unsigned long long kind; NSObject *oldValue; NSObject *newValue; NSIndexSet *indexes; id extraData; } _details;
    NSObject *_originalObservable;
    BOOL _isPriorNotification;
    BOOL _isRetainingObjects;
}

- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void)retainObjects;
- (void)dealloc;
- (id)initWithDetailsNoCopy:(struct { unsigned long long x0; id x1; id x2; id x3; id x4; })a0 originalObservable:(id)a1 isPriorNotification:(BOOL)a2;
- (void)setOriginalObservable:(id)a0;
- (void)setDetailsNoCopy:(struct { unsigned long long x0; id x1; id x2; id x3; id x4; })a0 originalObservable:(id)a1;
- (unsigned long long)count;

@end
