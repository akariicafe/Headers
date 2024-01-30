@class NSDictionary;

@interface SDSodiumSynonyms : NSObject {
    NSDictionary *synonymDictionary;
}

- (id)init;
- (void).cxx_destruct;
- (id)_cleanWord:(id)a0 unacceptableCharSet:(id)a1;
- (BOOL)_loadSynonymsFromFile:(id)a0 error:(id *)a1;
- (id)getSynonymsForWord:(id)a0;
- (void)loadSynonymDictionary;

@end
