@interface EMFQueryLogger : NSObject

@property (readonly, nonatomic) const struct __EmojiLocaleDataWrapper { } *localeData;

+ (id)documentWeightsStringFromQueryResult:(id)a0 usingLocaleData:(const struct __EmojiLocaleDataWrapper { } *)a1;
+ (id)overriddenResultsStringFromQueryResult:(id)a0 usingLocaleData:(const struct __EmojiLocaleDataWrapper { } *)a1;

- (void)dealloc;
- (void)logQueryResult:(id)a0;
- (id)initWithEmojiLocaleData:(const struct __EmojiLocaleDataWrapper { } *)a0;

@end
