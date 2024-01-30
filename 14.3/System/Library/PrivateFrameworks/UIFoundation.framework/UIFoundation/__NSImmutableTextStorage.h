@class NSAttributedString, NSLayoutManager, NSTextContainer;

@interface __NSImmutableTextStorage : NSTextStorage {
    NSAttributedString *_contents;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
}

@property (readonly) NSLayoutManager *layoutManager;
@property (readonly) NSTextContainer *textContainer;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)attributesAtIndex:(unsigned long long)a0 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 longestEffectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)processEditing;
- (void)setAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (id)initWithAttributedString:(id)a0;
- (void)dealloc;
- (BOOL)_tryRetain;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)string;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
