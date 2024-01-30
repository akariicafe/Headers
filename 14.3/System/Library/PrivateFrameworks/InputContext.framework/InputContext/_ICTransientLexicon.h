@class NSString;

@interface _ICTransientLexicon : NSObject {
    struct _LXLexicon { } *_lexicon;
    int _count;
}

@property (readonly, nonatomic) unsigned char typeFlags;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long entryCount;

- (void)removeAllEntries;
- (id)initWithName:(id)a0 typeFlags:(unsigned char)a1;
- (void)removeEntriesBySource:(unsigned char)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getEntryRefCount:(id)a0;
- (id)getSortKeyEquivalents:(id)a0;
- (id)getUsageCount:(id)a0;
- (struct _LXLexicon { } *)getLexiconImplementation;
- (void)removeEntry:(id)a0 source:(unsigned char)a1;
- (BOOL)contains:(id)a0;
- (struct _LXEntry { } *)copyEntryForString:(id)a0;
- (id)getEntries;
- (BOOL)addEntry:(id)a0 source:(unsigned char)a1 type:(unsigned char)a2;

@end
