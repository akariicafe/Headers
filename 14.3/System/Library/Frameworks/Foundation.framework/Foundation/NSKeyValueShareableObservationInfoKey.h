@class NSKeyValueObservationInfo, NSKeyValueObservance, NSKeyValueProperty, NSObject;

@interface NSKeyValueShareableObservationInfoKey : NSObject {
    BOOL _addingNotRemoving;
    NSKeyValueObservationInfo *_baseObservationInfo;
    NSObject *_additionObserver;
    NSKeyValueProperty *_additionProperty;
    unsigned long long _additionOptions;
    void *_additionContext;
    NSObject *_additionOriginalObservable;
    NSKeyValueObservance *_removalObservance;
    unsigned long long _removalObservanceIndex;
    unsigned long long _cachedHash;
}

@end
