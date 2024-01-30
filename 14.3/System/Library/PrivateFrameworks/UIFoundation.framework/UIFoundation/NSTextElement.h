@class NSTextContentManager, NSTextRange;

@interface NSTextElement : NSObject {
    NSTextContentManager *_textContentManager;
}

@property (weak) NSTextContentManager *textContentManager;
@property (retain) NSTextRange *elementRange;

- (void)setTextContentManager:(id)a0;
- (id)init;
- (id)initWithTextContentManager:(id)a0;
- (void)dealloc;
- (id)textContentManager;
- (struct CGSize { double x0; double x1; })estimatedIntrinsicContentSizeForTextLayoutManager:(id)a0;

@end
