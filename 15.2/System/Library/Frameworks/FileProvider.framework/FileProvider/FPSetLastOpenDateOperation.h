@class NSArray, NSDate;

@interface FPSetLastOpenDateOperation : FPTransformOperation {
    NSArray *_items;
    NSDate *_date;
}

- (id)fp_prettyDescription;
- (void).cxx_destruct;
- (id)replicateForItems:(id)a0;
- (unsigned long long)transformItem:(id)a0 atIndex:(unsigned long long)a1;
- (id)initWithItems:(id)a0 date:(id)a1;

@end
