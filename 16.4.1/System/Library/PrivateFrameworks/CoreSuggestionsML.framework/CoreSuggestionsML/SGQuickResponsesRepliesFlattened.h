@class NSArray, _PASLock;

@interface SGQuickResponsesRepliesFlattened : SGQuickResponsesReplies {
    NSArray *_replyTexts;
    _PASLock *_normalizedReplyTextsSet;
    unsigned long long _replyTextStringsCount;
}

+ (unsigned long long)countReplyTextsForArray:(id)a0;
+ (id)normalizedReplyTextsSetForArray:(id)a0;

- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)replyClassCount;
- (unsigned long long)maxDistinctReplies;
- (unsigned long long)modelCount;
- (id)normalizedReplyTextsSet;
- (unsigned long long)replyCountForIndex:(unsigned long long)a0;
- (unsigned long long)replyTextCount;
- (id)replyTextForIndex:(unsigned long long)a0 position:(unsigned long long)a1;
- (id)replyTextForIndexAndPosition:(id)a0;
- (id)replyTextsForIndex:(unsigned long long)a0;

@end
