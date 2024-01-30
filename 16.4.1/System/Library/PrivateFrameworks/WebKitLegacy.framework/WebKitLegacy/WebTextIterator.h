@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate *_private;
}

- (id)initWithRange:(id)a0;
- (id)currentRange;
- (void)dealloc;
- (BOOL)atEnd;
- (id)currentText;
- (void)advance;
- (unsigned long long)currentTextLength;
- (const unsigned short *)currentTextPointer;
- (id)currentNode;

@end
