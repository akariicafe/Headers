@interface CDMFoundation.CDMNLv4OverrideDatabase : NSObject {
    void /* unknown type, empty encoding */ store;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)setupWithLanguageCode:(id)a0 filePath:(id)a1;
- (id)initWithTrieFilePath:(id)a0;
- (BOOL)isTrieBacked;
- (id)matchWithInputs:(id)a0;
- (id)matchWithInputs:(id)a0 shouldAppend:(BOOL *)a1;

@end
