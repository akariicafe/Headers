@class NSString;

@interface _UIKeyboardArbiterDebugEntryString : _UIKeyboardArbiterDebugEntry {
    NSString *_message;
    NSString *_type;
}

+ (id)entryWithMessage:(id)a0 type:(id)a1;

- (void)enumerateContents:(id /* block */)a0;
- (int)importance;
- (void).cxx_destruct;

@end
