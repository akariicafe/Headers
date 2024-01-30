@class NSMutableString;

@interface OADRegularTextRun : OADTextRun {
    NSMutableString *mText;
}

- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (id)text;
- (unsigned long long)characterCount;
- (BOOL)isSimilarToTextRun:(id)a0;

@end
