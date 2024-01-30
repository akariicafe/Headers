@class EDResources, NSString, EDWorksheet, EDReference;

@interface EDColumnInfo : NSObject <NSCopying, EDKeyedObject> {
    EDResources *mResources;
    EDWorksheet *mWorksheet;
    int mWidth;
    BOOL mHidden;
    EDReference *mRange;
    unsigned long long mStyleIndex;
    unsigned char mOutlineLevel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columnInfoWithResources:(id)a0 worksheet:(id)a1;

- (double)width;
- (long long)key;
- (void)setRange:(id)a0;
- (id)range;
- (void)setWidth:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHidden:(BOOL)a0;
- (BOOL)isHidden;
- (id)style;
- (void).cxx_destruct;
- (void)setStyle:(id)a0;
- (void)setStyleIndex:(unsigned long long)a0;
- (unsigned long long)styleIndex;
- (id)initWithResources:(id)a0 worksheet:(id)a1;
- (unsigned char)outlineLevel;
- (void)setOutlineLevel:(unsigned char)a0;
- (void)setRangeWithFirstColumn:(int)a0 lastColumn:(int)a1;
- (void)setWidthInXlUnits:(int)a0;
- (int)widthInXlUnits;

@end
