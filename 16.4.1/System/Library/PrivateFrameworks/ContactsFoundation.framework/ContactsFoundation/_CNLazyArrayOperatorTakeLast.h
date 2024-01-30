@class CNQueue;

@interface _CNLazyArrayOperatorTakeLast : _CNLazyArrayOperator {
    CNQueue *_buffer;
    BOOL _haveFilledBuffer;
}

- (id)nextObject;
- (void).cxx_destruct;
- (void)fillBuffer;
- (id)initWithInput:(id)a0 limit:(unsigned long long)a1;

@end
