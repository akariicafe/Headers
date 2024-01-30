@class WMStyle, WDCharacterRun, NSString;

@interface WMCharacterRunMapper : CMMapper {
    WDCharacterRun *wdCharacterRun;
    WMStyle *mStyle;
    float mFontSizeBumpFactor;
    NSString *mText;
    BOOL mIsDeleted;
}

+ (void)addNonCollapsableSpanAt:(id)a0 withState:(id)a1;

- (id)initWithText:(id)a0;
- (BOOL)isDeleted;
- (void).cxx_destruct;
- (id)baseStyle;
- (int)defaultTabWidth;
- (void)mapAt:(id)a0 withState:(id)a1;
- (id)copyCharacterStyle;
- (unsigned int)countAndStripLeadingTabs;
- (void)mapSubstring:(id)a0 at:(id)a1;
- (void)mapTabs:(unsigned int)a0 at:(id)a1 afterText:(id)a2;
- (id)initWithWDCharacterRun:(id)a0 parent:(id)a1;
- (void)map1At:(id)a0 withState:(id)a1;
- (id)boldStyle;

@end
