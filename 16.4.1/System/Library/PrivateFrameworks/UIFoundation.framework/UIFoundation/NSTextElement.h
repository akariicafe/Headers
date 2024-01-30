@class NSArray, NSTextRange, NSTextContentManager;

@interface NSTextElement : NSObject {
    NSTextContentManager *_textContentManager;
}

@property unsigned char coalescingType;
@property (readonly) BOOL isBeginningOfDocument;
@property (readonly) BOOL isEndOfDocument;
@property (weak) NSTextContentManager *textContentManager;
@property (retain) NSTextRange *elementRange;
@property (readonly, copy) NSArray *childElements;
@property (readonly, weak) NSTextElement *parentElement;
@property (readonly) BOOL isRepresentedElement;

+ (long long)_searchElements:(id)a0 forLocation:(id)a1;

- (BOOL)isBeginningOfDocument;
- (id)initWithTextContentManager:(id)a0;
- (id)textContentManager;
- (void)dealloc;
- (id)init;
- (id)_firstRepresentableChildElement;
- (BOOL)isEndOfDocument;
- (id)childTextElementForLocation:(id)a0 elementIndex:(out long long *)a1;
- (void)setTextContentManager:(id)a0;
- (struct CGSize { double x0; double x1; })estimatedIntrinsicContentSizeForTextLayoutManager:(id)a0;

@end
