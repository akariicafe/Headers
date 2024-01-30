@class NSDictionary;

@interface _NSAttributes : NSObject {
    NSDictionary *_attributes;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

- (void)dealloc;
- (id)initWithAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setAttributesInTextStorage:(id)a0;

@end
