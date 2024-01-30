@interface SmartReplies.SRSmartRepliesActionSuggestion : SmartReplies.SRSmartRepliesSuggestion

@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isRichSuggestion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (id)initWithTitle:(id)a0 isDynamicSuggestion:(BOOL)a1;
- (id)initWithType:(long long)a0 title:(id)a1 isRichSuggestion:(BOOL)a2;

@end
