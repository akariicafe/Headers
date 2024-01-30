@class NSString, NSMutableString;

@interface MFMessageBodyStringAccumulator : NSObject <MFMessageBodyStringAccumulator> {
    NSMutableString *_accumulatedString;
    unsigned long long _remainingLength;
    int _options;
    int _lastEntity;
    unsigned long long _lastCustomEntityTag;
    BOOL _isFull;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFull;
- (void)appendNewline;
- (void)appendCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (void)appendString:(id)a0;
- (void)dealloc;
- (void)appendRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofString:(id)a1;
- (id)initWithOptions:(int)a0 lengthLimit:(unsigned long long)a1;
- (void)appendInnerTextWithConsumableNode:(id)a0;
- (id)accumulatedString;
- (void)appendCustomEntityWithTag:(unsigned long long)a0 stringRepresentation:(id)a1;

@end
