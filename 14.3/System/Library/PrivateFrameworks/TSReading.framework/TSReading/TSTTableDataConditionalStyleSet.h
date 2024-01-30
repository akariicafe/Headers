@class TSTConditionalStyleSet;

@interface TSTTableDataConditionalStyleSet : TSTTableDataObject {
    TSTConditionalStyleSet *mConditionalStyleSet;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithConditionalStyleSet:(id)a0;

@end
