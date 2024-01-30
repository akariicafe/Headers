@class NSArray;

@interface _UIKeyboardArbiterDebugEntryDictionaries : _UIKeyboardArbiterDebugEntry {
    NSArray *_dictionaries;
}

+ (id)entryWithDictionaries:(id)a0;

- (void)enumerateContents:(id /* block */)a0;
- (int)importance;
- (void).cxx_destruct;

@end
