@class NSEnumerator, NSDictionary, NSMutableArray;

@interface HMDStructuredDataFoundationReader : HMDTokenBasedStructuredReader {
    NSEnumerator *_enumerator;
    NSDictionary *_dictionary;
    NSMutableArray *_stack;
}

- (void)failWithError:(id)a0;
- (void).cxx_destruct;
- (struct _HMDStructuredDataToken { long long x0; id x1; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x0; id x1; } *)a0;

@end
