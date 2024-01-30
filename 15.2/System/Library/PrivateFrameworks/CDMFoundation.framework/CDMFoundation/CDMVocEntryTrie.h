@class CDMMarisaTrie;

@interface CDMVocEntryTrie : NSObject {
    CDMMarisaTrie *_vocTrie;
}

@property (readonly, nonatomic) BOOL isValid;

- (BOOL)hasPrefix:(id)a0;
- (void).cxx_destruct;
- (id)entriesForText:(id)a0;
- (BOOL)hasEntry:(id)a0;
- (id)initWithFilePath:(id)a0 versionNumber:(id)a1;

@end
