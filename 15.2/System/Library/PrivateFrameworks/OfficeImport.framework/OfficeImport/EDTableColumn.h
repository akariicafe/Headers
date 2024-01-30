@class EDString, EDResources;

@interface EDTableColumn : NSObject {
    EDResources *mResources;
    unsigned long long mHeaderRowDxfIndex;
    unsigned long long mTotalsRowDxfIndex;
    unsigned long long mDataAreaDxfIndex;
    EDString *mName;
    EDString *mUniqueName;
    EDString *mTotalsRowLabel;
}

+ (id)tableColumnWithResources:(id)a0;

- (id)uniqueName;
- (id)initWithResources:(id)a0;
- (void)setName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (void)setUniqueName:(id)a0;
- (id)headerRowDxf;
- (void)setHeaderRowDxf:(id)a0;
- (id)totalsRowDxf;
- (void)setTotalsRowDxf:(id)a0;
- (id)dataAreaDxf;
- (void)setDataAreaDxf:(id)a0;
- (id)totalsRowLabel;
- (void)setTotalsRowLabel:(id)a0;
- (unsigned long long)headerRowDxfIndex;
- (void)setHeaderRowDxfIndex:(unsigned long long)a0;
- (unsigned long long)totalsRowDxfIndex;
- (void)setTotalsRowDxfIndex:(unsigned long long)a0;
- (unsigned long long)dataAreaDxfIndex;
- (void)setDataAreaDxfIndex:(unsigned long long)a0;

@end
