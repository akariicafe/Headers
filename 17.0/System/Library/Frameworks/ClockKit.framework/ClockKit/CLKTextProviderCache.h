@class NSMutableDictionary;

@interface CLKTextProviderCache : NSObject {
    NSMutableDictionary *_cachesByStyle;
}

- (void).cxx_destruct;
- (id)_cacheForStyle:(id)a0;
- (id)attributedStringAndSize:(struct CGSize { double x0; double x1; } *)a0 forMaxWidth:(double)a1 withStyle:(id)a2 generator:(id /* block */)a3;
- (id)attributedStringForIndex:(unsigned long long)a0 withStyle:(id)a1 generator:(id /* block */)a2;

@end
