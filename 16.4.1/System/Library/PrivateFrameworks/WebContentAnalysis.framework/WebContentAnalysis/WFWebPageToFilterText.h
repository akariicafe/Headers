@interface WFWebPageToFilterText : WFWebPageDecorator

- (id)URLFuzzyForFilter;
- (id)URLFuzzyWithWordLength:(int)a0;
- (BOOL)isWorthAnalyzingWithEvidence:(int *)a0 message:(id *)a1;
- (id)rawPlainText;
- (BOOL)selfRestricted;

@end
