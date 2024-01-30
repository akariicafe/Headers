@class OITSUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject {
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (id)fontAtIndex:(unsigned long long)a0;
- (void)clear;
- (id)fonts;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (id)createFontWithName:(id)a0;
- (id)fontWithName:(id)a0 create:(BOOL)a1;
- (id)fontWithName:(id)a0;
- (unsigned long long)indexOfFont:(id)a0;

@end
