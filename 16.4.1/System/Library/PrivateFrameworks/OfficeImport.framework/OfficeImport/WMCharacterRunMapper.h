@class WMStyle, WDCharacterRun, NSString;

@interface WMCharacterRunMapper : CMMapper {
    WDCharacterRun *wdCharacterRun;
    WMStyle *mStyle;
    float mFontSizeBumpFactor;
    NSString *mText;
    BOOL mIsDeleted;
}

+ (void)addNonCollapsableSpanAt:(id)a0 withState:(id)a1;

- (BOOL)isDeleted;
- (id)initWithText:(id)a0;
- (void).cxx_destruct;
- (id)baseStyle;
- (int)defaultTabWidth;
- (id)boldStyle;
- (id)copyCharacterStyle;
- (unsigned int)countAndStripLeadingTabs;
- (id)initWithWDCharacterRun:(id)a0 parent:(id)a1;
- (void)map1At:(id)a0 withState:(id)a1;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)mapSubstring:(id)a0 at:(id)a1;
- (void)mapTabs:(unsigned int)a0 at:(id)a1 afterText:(id)a2;

@end
