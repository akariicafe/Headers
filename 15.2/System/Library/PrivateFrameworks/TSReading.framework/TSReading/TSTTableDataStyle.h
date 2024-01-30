@class TSSStyle;

@interface TSTTableDataStyle : TSTTableDataObject {
    TSSStyle *mStyle;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initObjectWithStyle:(id)a0;

@end
