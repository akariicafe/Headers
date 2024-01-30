@class EDResources;

@interface CHDLegendEntry : NSObject {
    unsigned long long mFontIndex;
    unsigned int mEntryIndex;
    EDResources *mResources;
}

- (id)font;
- (void)setFontIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithResources:(id)a0;
- (void)setFont:(id)a0;
- (id)description;
- (unsigned long long)fontIndex;
- (unsigned int)entryIndex;
- (void)setEntryIndex:(unsigned int)a0;

@end
