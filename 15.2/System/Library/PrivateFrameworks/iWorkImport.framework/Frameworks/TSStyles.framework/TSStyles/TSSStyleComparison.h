@class TSSStyle;

@interface TSSStyleComparison : NSObject {
    TSSStyle *_first;
    TSSStyle *_second;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithStyle:(id)a0 andStyle:(id)a1;

@end
