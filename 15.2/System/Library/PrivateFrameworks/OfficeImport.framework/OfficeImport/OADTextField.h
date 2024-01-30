@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {
    NSString *mText;
    OADParagraphProperties *mParagraphProperties;
}

- (void)setText:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (id)text;
- (unsigned long long)characterCount;
- (id)paragraphProperties;
- (void)removeUnnecessaryOverrides;

@end
