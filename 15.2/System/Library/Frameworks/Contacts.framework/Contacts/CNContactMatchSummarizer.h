@interface CNContactMatchSummarizer : NSObject {
    void *_tokenList;
    struct __CFStringTokenizer { } *_tokenizer;
}

+ (id)summaryProperties;
+ (id)keyDescriptorForContactIdentifiers:(id)a0 matchInfos:(id)a1;
+ (id)summaryPropertyForMatchInfo:(id)a0;

- (id)summaryForContact:(id)a0 matchInfo:(id)a1;
- (id)attributedStringForPropertyValueString:(id)a0 queryTerms:(id)a1 outMatchCount:(unsigned long long *)a2;
- (id)init;
- (id)summariesFutureForContactsIdentifiers:(id)a0 matchInfos:(id)a1 contactStore:(id)a2 scheduler:(id)a3;
- (void)dealloc;

@end
