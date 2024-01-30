@class NSString;

@interface OKMediaSearchClusterPredicate : OKMediaClusterPredicate {
    NSString *_searchString;
    unsigned long long _type;
    unsigned long long _options;
}

- (void)dealloc;
- (id)title;
- (float)efficiencyForItems:(id)a0;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;
- (id)initWithString:(id)a0 type:(unsigned long long)a1 options:(unsigned long long)a2;

@end
