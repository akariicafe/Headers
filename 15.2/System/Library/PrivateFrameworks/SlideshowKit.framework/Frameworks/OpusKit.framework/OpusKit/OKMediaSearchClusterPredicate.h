@class NSString;

@interface OKMediaSearchClusterPredicate : OKMediaClusterPredicate {
    NSString *_searchString;
    unsigned long long _type;
    unsigned long long _options;
}

- (id)title;
- (void)dealloc;
- (id)evaluateItems:(id)a0 progressBlock:(id /* block */)a1;
- (float)efficiencyForItems:(id)a0;
- (id)initWithString:(id)a0 type:(unsigned long long)a1 options:(unsigned long long)a2;

@end
