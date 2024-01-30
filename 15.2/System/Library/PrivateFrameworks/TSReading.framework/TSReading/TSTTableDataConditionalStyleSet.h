@class TSTConditionalStyleSet;

@interface TSTTableDataConditionalStyleSet : TSTTableDataObject {
    TSTConditionalStyleSet *mConditionalStyleSet;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initObjectWithConditionalStyleSet:(id)a0;

@end
