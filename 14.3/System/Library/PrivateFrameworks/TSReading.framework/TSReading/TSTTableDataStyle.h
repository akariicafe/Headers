@class TSSStyle;

@interface TSTTableDataStyle : TSTTableDataObject {
    TSSStyle *mStyle;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithStyle:(id)a0;

@end
