@class WKDOMRange;

@interface WKDOMTextIterator : NSObject {
    struct unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> > { struct __compressed_pair<WebCore::TextIterator *, std::__1::default_delete<WebCore::TextIterator> > { struct TextIterator *__value_; } __ptr_; } _textIterator;
    struct Vector<unsigned short, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { unsigned short *m_buffer; unsigned int m_capacity; unsigned int m_size; } _upconvertedText;
}

@property (readonly) BOOL atEnd;
@property (readonly) WKDOMRange *currentRange;
@property (readonly) unsigned long long currentTextLength;
@property (readonly) const unsigned short *currentTextPointer;

- (void).cxx_destruct;
- (void)advance;
- (id).cxx_construct;
- (id)initWithRange:(id)a0;

@end
