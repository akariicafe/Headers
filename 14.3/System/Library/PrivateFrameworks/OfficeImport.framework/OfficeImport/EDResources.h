@class EDCollection, EDContentFormatsCollection, EDFontsCollection, EDColorsCollection, EDLinksCollection, EDTableStylesCollection, EDStylesCollection;

@interface EDResources : NSObject {
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}

- (id)names;
- (id)styles;
- (id)fonts;
- (id)border;
- (id)borders;
- (void).cxx_destruct;
- (id)colors;
- (id)fills;
- (id)themes;
- (void)setColors:(id)a0;
- (id)strings;
- (id)description;
- (id)links;
- (id)tableStyles;
- (id)contentFormats;
- (id)initWithStringOptimization:(BOOL)a0;
- (id)alignmentInfos;
- (id)differentialStyles;
- (void)setThemes:(id)a0;

@end
