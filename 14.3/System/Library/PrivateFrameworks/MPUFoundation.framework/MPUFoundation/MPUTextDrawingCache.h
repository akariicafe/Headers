@class NSStringDrawingContext, NSDictionary, NSHashTable, NSOperationQueue, MPUTextDrawingCacheKey, NSCache;

@interface MPUTextDrawingCache : NSObject {
    NSCache *_cache;
    NSStringDrawingContext *_reusableStringDrawingContext;
    MPUTextDrawingCacheKey *_reusableTextDrawingCacheKey;
    NSHashTable *_invalidationObservers;
    unsigned long long _invalidationNotificationCoalescingRequestsCount;
    BOOL _wasInvalidatedWithoutNotifyingObservers;
    NSOperationQueue *_preHeatingOperationQueue;
}

@property (nonatomic, getter=_isOpaque, setter=_setOpaque:) BOOL opaque;
@property (nonatomic, getter=_usesImageCachingInsteadOfStringDrawingContextCaching, setter=_setUsesImageCachingInsteadOfStringDrawingContextCaching:) BOOL usesImageCachingInsteadOfStringDrawingContextCaching;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) double displayScale;
@property (copy, nonatomic) id /* block */ attributedTextProvider;

+ (void)_updateStringDrawingContext:(id)a0 withMaximumNumberOfLines:(unsigned long long)a1;
+ (id)_drawingContextForText:(id)a0 allowedSize:(struct CGSize { double x0; double x1; })a1 fromCache:(id)a2 usingReusableStringDrawingContext:(id)a3 reusableTextDrawingCacheKey:(id)a4 textAttributes:(id)a5 maximumNumberOfLines:(unsigned long long)a6 opaque:(BOOL)a7 displayScale:(double)a8 attributedTextProvider:(id /* block */)a9;
+ (struct CGSize { double x0; double x1; })_validateAllowedSize:(struct CGSize { double x0; double x1; })a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidate;
- (void)_notifyInvalidationObservers;
- (id)drawingContextForText:(id)a0 allowedSize:(struct CGSize { double x0; double x1; })a1;
- (void)addInvalidationObserver:(id)a0;
- (void)removeInvalidationObserver:(id)a0;
- (void)beginCoalescingInvalidationNotifications;
- (void)endCoalescingInvalidationNotifications;
- (void)preHeatForStrings:(id)a0 allowedSize:(struct CGSize { double x0; double x1; })a1;

@end
