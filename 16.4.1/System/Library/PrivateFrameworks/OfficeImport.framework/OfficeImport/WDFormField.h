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
- (void).cxx_destruct;
- (void)setNamedLocation:(id)a0;
- (id)namedLocation;
- (id)initWithParagraph:(id)a0;
- (int)runType;
- (id)dosName;
- (id)macName;
- (void)setLinkSpecifyingNamedLocation:(BOOL)a0;
- (BOOL)linkAbsolute;
- (BOOL)linkSpecifyingNamedLocation;
- (void)setDosName:(id)a0;
- (void)setLinkAbsolute:(BOOL)a0;
- (void)setMacName:(id)a0;

@end
