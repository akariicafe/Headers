@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

- (id)initWithRange:(id)a0;
- (BOOL)atEnd;
- (void)advance;
- (id)currentRange;
- (id)currentText;
- (void)dealloc;
- (const unsigned short *)currentTextPointer;
- (unsigned long long)currentTextLength;
- (id)currentNode;

@end
