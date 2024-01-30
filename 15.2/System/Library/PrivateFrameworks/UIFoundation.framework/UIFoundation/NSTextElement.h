@class NSTextContentManager, NSTextRange;

@interface NSTextElement : NSObject {
    NSTextContentManager *_textContentManager;
}

@property unsigned char coalescingType;
@property (weak) NSTextContentManager *textContentManager;
@property (retain) NSTextRange *elementRange;

- (struct CGSize { double x0; double x1; })estimatedIntrinsicContentSizeForTextLayoutManager:(id)a0;
- (id)initWithTextContentManager:(id)a0;
- (void)setTextContentManager:(id)a0;
- (id)init;
- (void)dealloc;
- (id)textContentManager;

@end
