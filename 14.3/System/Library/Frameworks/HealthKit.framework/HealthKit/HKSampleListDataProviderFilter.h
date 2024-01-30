@class _HKFilter;

@interface HKSampleListDataProviderFilter : NSObject {
    _HKFilter *_filter;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)acceptsDataObject:(id)a0;
- (id)initWithPredicate:(id)a0 dataTypes:(id)a1;

@end
