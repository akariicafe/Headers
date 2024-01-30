@interface CVNLPDecodingLexicon : NSObject

@property (readonly, nonatomic) struct _LXCursor { } *_rootCursor;
@property (readonly, nonatomic) const struct _LXLexicon { } *lexicon;
@property (readonly, nonatomic) unsigned long long priority;

+ (const struct _LXLexicon { } *)_createLexiconForLocale:(id)a0;
+ (id)decodingLexiconForLocale:(id)a0;
+ (id)decodingLexiconForLocale:(id)a0 priority:(unsigned long long)a1;

- (void)dealloc;
- (id)initWithLexicon:(struct _LXLexicon { } *)a0;
- (id)initWithLexicon:(struct _LXLexicon { } *)a0 priority:(unsigned long long)a1;

@end
