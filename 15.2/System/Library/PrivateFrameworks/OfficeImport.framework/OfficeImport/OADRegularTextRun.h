@class NSMutableString;

@interface OADRegularTextRun : OADTextRun {
    NSMutableString *mText;
}

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)init;
- (id)text;
- (unsigned long long)characterCount;
- (BOOL)isSimilarToTextRun:(id)a0;

@end
