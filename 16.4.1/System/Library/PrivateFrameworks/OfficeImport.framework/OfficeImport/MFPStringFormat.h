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
- (void)dealloc;
- (id)init;
- (const float *)tabStops;
- (unsigned int)formatFlags;
- (void)setFormatFlags:(unsigned int)a0;
- (void)setTrimming:(int)a0;
- (int)trimming;
- (unsigned short)digitSubstitutionLanguage;
- (int)digitSubstitutionMethod;
- (float)firstTabOffset;
- (int)hotkeyPrefix;
- (int)lineAlignment;
- (void)setDigitSubstitutionLanguage:(unsigned short)a0;
- (void)setDigitSubstitutionMethod:(int)a0;
- (void)setFirstTabOffset:(float)a0;
- (void)setHotkeyPrefix:(int)a0;
- (void)setLineAlignment:(int)a0;
- (void)setTabStops:(const float *)a0 count:(int)a1;
- (int)tabStopCount;

@end
