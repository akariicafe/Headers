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

- (id)strings;
- (id)borders;
- (id)fonts;
- (id)colors;
- (id)links;
- (id)fills;
- (id)themes;
- (id)description;
- (void).cxx_destruct;
- (id)names;
- (id)border;
- (id)styles;
- (void)setColors:(id)a0;
- (id)tableStyles;
- (id)contentFormats;
- (id)initWithStringOptimization:(BOOL)a0;
- (id)alignmentInfos;
- (id)differentialStyles;
- (void)setThemes:(id)a0;

@end
