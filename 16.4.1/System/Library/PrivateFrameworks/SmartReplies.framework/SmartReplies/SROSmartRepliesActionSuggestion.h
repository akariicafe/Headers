@class _TtC12SmartReplies30SRSmartRepliesActionSuggestion;

@interface SROSmartRepliesActionSuggestion : SROSmartRepliesSuggestion {
    _TtC12SmartReplies30SRSmartRepliesActionSuggestion *_underlyingSuggestion;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL isRichSuggestion;

- (id)title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 isDynamicSuggestion:(BOOL)a1;
- (id)initWithType:(unsigned long long)a0 title:(id)a1 isRichSuggestion:(BOOL)a2;
- (BOOL)isDynamicSuggestion;

@end
