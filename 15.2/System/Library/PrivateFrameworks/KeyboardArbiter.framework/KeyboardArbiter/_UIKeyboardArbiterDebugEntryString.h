@class NSString;

@interface _UIKeyboardArbiterDebugEntryString : _UIKeyboardArbiterDebugEntry {
    NSString *_message;
    NSString *_type;
}

+ (id)entryWithFormat:(id)a0 arguments:(char *)a1 withType:(id)a2;

- (int)importance;
- (void).cxx_destruct;
- (void)enumerateContents:(id /* block */)a0;

@end
