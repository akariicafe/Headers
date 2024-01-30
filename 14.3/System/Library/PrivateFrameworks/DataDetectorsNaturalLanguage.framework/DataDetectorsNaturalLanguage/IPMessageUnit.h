@class NSString, NSArray, NSIndexSet, IPMessage, NSMutableArray;

@interface IPMessageUnit : NSObject {
    NSMutableArray *_followups;
    NSArray *_flatMessageThread;
    NSIndexSet *_rejectionRanges;
    NSIndexSet *_proposalAndAcceptationRanges;
    NSIndexSet *_neutralRanges;
    NSString *_bestLanguage;
    NSString *_lowercaseTextTruncated;
}

@property (readonly, copy) NSString *text;
@property (readonly, copy) NSString *lowercaseTextTruncated;
@property (readonly, weak) IPMessage *originalMessage;
@property (readonly) long long indexInOriginalMessage;
@property struct _NSRange { unsigned long long location; unsigned long long length; } interactedDateRange;
@property (readonly) NSArray *features;
@property (readonly) NSArray *sentenceFeatures;
@property (readonly) NSArray *dataFeatures;
@property (readonly) NSArray *keywordFeatures;
@property (readonly, weak) IPMessageUnit *previous;
@property (readonly) NSArray *followups;

- (void).cxx_destruct;
- (void)setFeatures:(id)a0;
- (id)description;
- (id)initWithText:(id)a0 originalMessage:(id)a1 index:(long long)a2;
- (id)bestLanguageID;
- (void)addFollowup:(id)a0;
- (void)setDataFeatures:(id)a0;
- (void)setKeywordFeatures:(id)a0;
- (void)setSentenceFeatures:(id)a0;
- (id)rejectionRanges;
- (id)neutralRanges;
- (id)proposalAndAcceptationRanges;

@end
