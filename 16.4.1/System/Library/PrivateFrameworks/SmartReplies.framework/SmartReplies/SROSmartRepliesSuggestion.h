@class NSString, _TtC12SmartReplies24SRSmartRepliesSuggestion;

@interface SROSmartRepliesSuggestion : NSObject {
    _TtC12SmartReplies24SRSmartRepliesSuggestion *_underlyingSuggestion;
}

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL isDynamicSuggestion;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 isDynamicSuggestion:(BOOL)a1;

@end
