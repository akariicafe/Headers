@class TSSStyle;

@interface TSTTableDataStyle : TSTTableDataObject {
    TSSStyle *mStyle;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initObjectWithStyle:(id)a0;

@end
