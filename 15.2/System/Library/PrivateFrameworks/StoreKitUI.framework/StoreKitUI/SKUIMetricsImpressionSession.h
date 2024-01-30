@class NSArray, NSMutableString, NSMutableOrderedSet, NSMapTable, NSMutableArray;

@interface SKUIMetricsImpressionSession : NSObject {
    NSMutableOrderedSet *_impressionableViewElements;
    NSMapTable *_impressionableViewElementsTimerMap;
}

@property (readonly, copy, nonatomic) NSMutableArray *impressionIdentifiers;
@property (readonly, copy, nonatomic) NSMutableString *impressionsString;
@property (readonly, copy, nonatomic) NSArray *impressionableViewElements;

- (void).cxx_destruct;
- (id)init;
- (void)addItemIdentifier:(long long)a0;
- (void)beginActiveImpressionForViewElement:(id)a0;
- (void)endAllPendingActiveImpression;
- (void)endActiveImpressionForViewElement:(id)a0;
- (void)addItemViewElement:(id)a0;
- (id)_getTimerForViewElement:(id)a0;
- (void)_clearTimerForViewElement:(id)a0;
- (void)_setTimer:(id)a0 forViewElement:(id)a1;
- (id)_allViewElementsInTimerMap;

@end
