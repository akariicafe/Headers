@interface WFWebPageToFilterText : WFWebPageDecorator

- (id)rawPlainText;
- (id)URLFuzzyWithWordLength:(int)a0;
- (BOOL)isWorthAnalyzingWithEvidence:(int *)a0 message:(id *)a1;
- (BOOL)selfRestricted;
- (id)URLFuzzyForFilter;

@end
