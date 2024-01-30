@interface MFPStringFormat : NSObject {
    int mAlignment;
    unsigned short mDigitSubstitutionLanguage;
    int mDigitSubstitutionMethod;
    unsigned int mFormatFlags;
    int mHotkeyPrefix;
    int mLineAlignment;
    float mFirstTabOffset;
    int mTabStopCount;
    float *mTabStops;
    int mTrimming;
}

- (int)alignment;
- (void)setAlignment:(int)a0;
- (id)init;
- (const float *)tabStops;
- (void)dealloc;
- (void)setTrimming:(int)a0;
- (unsigned int)formatFlags;
- (void)setFormatFlags:(unsigned int)a0;
- (void)setLineAlignment:(int)a0;
- (void)setDigitSubstitutionLanguage:(unsigned short)a0;
- (void)setDigitSubstitutionMethod:(int)a0;
- (void)setFirstTabOffset:(float)a0;
- (void)setHotkeyPrefix:(int)a0;
- (void)setTabStops:(const float *)a0 count:(int)a1;
- (int)tabStopCount;
- (float)firstTabOffset;
- (int)lineAlignment;
- (int)trimming;
- (unsigned short)digitSubstitutionLanguage;
- (int)digitSubstitutionMethod;
- (int)hotkeyPrefix;

@end
