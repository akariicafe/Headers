@class WDCharacterRun, WDRubyProperties;

@interface WDRubyRun : WDCharacterRun {
    WDCharacterRun *mPhoneticRun;
    WDRubyProperties *mRubyProperties;
}

- (void).cxx_destruct;
- (id)description;
- (int)runType;
- (id)initWithParagraph:(id)a0;
- (id)rubyProperties;
- (id)phoneticRun;
- (id)phoneticRunString;
- (void)setPhoneticRunString:(id)a0;
- (void)appendPhoneticRunString:(id)a0;
- (id)rubyBase;

@end
