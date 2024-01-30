@class NSDictionary;

@interface _UITextPlaceholderAttachment : NSTextAttachment

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } attachmentRange;
@property (copy, nonatomic) NSDictionary *typingAttributesBeforeInsertion;

- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (void).cxx_destruct;

@end
