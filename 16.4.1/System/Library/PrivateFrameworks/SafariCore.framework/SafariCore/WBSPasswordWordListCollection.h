@class NSMutableDictionary;

@interface WBSPasswordWordListCollection : NSObject {
    NSMutableDictionary *_wordListsByIdentifiers;
}

+ (id)commonPasscodeWordListCollection;
+ (id)commonPasswordWordListCollection;

- (id)init;
- (void).cxx_destruct;
- (void)addWordList:(id)a0;
- (id)entriesForString:(id)a0;
- (void)enumerateEntriesForString:(id)a0 withBlock:(id /* block */)a1;

@end
