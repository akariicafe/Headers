@class OITSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (id)fonts;
- (void)clear;
- (id)fontAtIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)count;
- (id)createFontWithName:(id)a0;
- (id)fontWithName:(id)a0 create:(BOOL)a1;
- (id)fontWithName:(id)a0;
- (unsigned long long)indexOfFont:(id)a0;

@end
