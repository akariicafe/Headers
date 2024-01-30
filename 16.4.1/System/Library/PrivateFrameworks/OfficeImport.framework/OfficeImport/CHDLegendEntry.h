@class EDResources;

@interface CHDLegendEntry : NSObject {
    unsigned long long mFontIndex;
    unsigned int mEntryIndex;
    EDResources *mResources;
}

- (void)setFontIndex:(unsigned long long)a0;
- (id)font;
- (void)setFont:(id)a0;
- (unsigned long long)fontIndex;
- (id)description;
- (void).cxx_destruct;
- (unsigned int)entryIndex;
- (void)setEntryIndex:(unsigned int)a0;
- (id)initWithResources:(id)a0;

@end
