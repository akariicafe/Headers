@class NSMutableDictionary;

@interface WBSPasswordWordListCollection : NSObject {
    NSMutableDictionary *_wordListsByIdentifiers;
}

+ (id)commonPasswordWordListCollection;
+ (id)commonPasscodeWordListCollection;

- (void).cxx_destruct;
- (id)init;
- (void)enumerateEntriesForString:(id)a0 withBlock:(id /* block */)a1;
- (id)entriesForString:(id)a0;
- (void)addWordList:(id)a0;

@end
