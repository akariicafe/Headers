@interface JULanguageAwareTextStorage : NSObject <NSTextStorageDelegate, JUWritingDirectionContentProtocol> {
    void /* unknown type, empty encoding */ originalTextStorageDelegate;
    void /* unknown type, empty encoding */ languageAwareString;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ textStorage;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTextStorage:(id)a0;
- (void)textStorage:(id)a0 didProcessEditing:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3;
- (void)textStorage:(id)a0 willProcessEditing:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3;
- (long long)writingDirectionOfLine:(long long)a0 maximumLinesShown:(long long)a1 withWidth:(double)a2 lineBreakMode:(long long)a3 cacheLayoutInfo:(BOOL)a4;
- (id)writingDirectionsQuantities;

@end
