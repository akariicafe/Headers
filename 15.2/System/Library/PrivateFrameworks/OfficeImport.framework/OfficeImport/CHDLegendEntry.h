@class EDResources;

@interface CHDLegendEntry : NSObject {
    unsigned long long mFontIndex;
    unsigned int mEntryIndex;
    EDResources *mResources;
}

- (void)setFont:(id)a0;
- (id)initWithResources:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned int)entryIndex;
- (unsigned long long)fontIndex;
- (void)setEntryIndex:(unsigned int)a0;
- (void)setFontIndex:(unsigned long long)a0;
- (id)font;

@end
