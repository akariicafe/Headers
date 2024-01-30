@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

- (BOOL)atEnd;
- (void)dealloc;
- (id)currentRange;
- (void)advance;
- (id)currentNode;
- (id)currentText;
- (id)initWithRange:(id)a0;
- (const unsigned short *)currentTextPointer;
- (unsigned long long)currentTextLength;

@end
