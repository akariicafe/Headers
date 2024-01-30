@class NSString;

@interface _ICLexiconView : NSObject {
    struct _LXLexicon { } *_lexicon;
}

@property (readonly, nonatomic) unsigned char typeFlags;
@property (readonly, nonatomic) NSString *name;

- (const struct _LXLexicon { } *)getLexiconImplementation;
- (void).cxx_destruct;
- (BOOL)contains:(id)a0;
- (void)dealloc;
- (id)initWithName:(id)a0 typeFlags:(unsigned char)a1;
- (id)getSortKeyEquivalents:(id)a0;
- (struct _LXEntry { } *)copyEntryForString:(id)a0;

@end
