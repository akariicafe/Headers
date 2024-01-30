@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {
    NSString *mText;
    OADParagraphProperties *mParagraphProperties;
}

- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (id)text;
- (unsigned long long)characterCount;
- (void)setText:(id)a0;
- (id)paragraphProperties;
- (void)removeUnnecessaryOverrides;

@end
