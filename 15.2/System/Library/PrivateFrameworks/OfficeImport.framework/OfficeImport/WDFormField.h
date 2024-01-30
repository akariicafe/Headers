@class NSString;

@interface WDFormField : WDRun {
    unsigned int mPosition;
    BOOL mLinkAbsolute;
    BOOL mLinkSpecifyingNamedLocation;
    NSString *mNamedLocation;
    NSString *mURI;
    NSString *mMacName;
    NSString *mDosName;
}

- (void)setPosition:(unsigned int)a0;
- (id)URI;
- (unsigned int)position;
- (void)setURI:(id)a0;
- (id)description;
- (void)setNamedLocation:(id)a0;
- (void).cxx_destruct;
- (id)namedLocation;
- (int)runType;
- (id)macName;
- (id)dosName;
- (id)initWithParagraph:(id)a0;
- (BOOL)linkAbsolute;
- (void)setLinkAbsolute:(BOOL)a0;
- (BOOL)linkSpecifyingNamedLocation;
- (void)setLinkSpecifyingNamedLocation:(BOOL)a0;
- (void)setMacName:(id)a0;
- (void)setDosName:(id)a0;

@end
