@interface EDSheetReference : EDReference {
    unsigned long long mSheetIndex;
}

+ (id)referenceWithSheetIndex:(unsigned long long)a0 firstRow:(int)a1 lastRow:(int)a2 firstColumn:(int)a3 lastColumn:(int)a4;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)fullyAdjacentToReference:(id)a0;
- (id)initWithSheetIndex:(unsigned long long)a0 firstRow:(int)a1 lastRow:(int)a2 firstColumn:(int)a3 lastColumn:(int)a4;
- (BOOL)isEqualToTableReference:(id)a0;
- (BOOL)isSheedIndexValid;
- (unsigned long long)sheetIndex;
- (void)unionWithReference:(id)a0;

@end
