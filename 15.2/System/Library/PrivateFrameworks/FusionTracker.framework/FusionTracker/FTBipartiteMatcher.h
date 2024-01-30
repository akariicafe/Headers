@interface FTBipartiteMatcher : NSObject {
    struct unique_ptr<ft::HungarianMatcher, std::default_delete<ft::HungarianMatcher>> { struct __compressed_pair<ft::HungarianMatcher *, std::default_delete<ft::HungarianMatcher>> { struct HungarianMatcher *__value_; } __ptr_; } _optimizer;
}

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)initWithInitialSize:(unsigned long long)a0;
- (id)computeMatchingForCostMatrix:(const float *)a0 withRowCount:(unsigned long long)a1 columnCount:(unsigned long long)a2;

@end
