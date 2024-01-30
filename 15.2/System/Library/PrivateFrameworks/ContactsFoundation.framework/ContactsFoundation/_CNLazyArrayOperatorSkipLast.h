@class CNQueue;

@interface _CNLazyArrayOperatorSkipLast : _CNLazyArrayOperator {
    CNQueue *_buffer;
    unsigned long long _limit;
    BOOL _haveFilledBuffer;
}

- (id)nextObject;
- (BOOL)fillBuffer;
- (id)initWithInput:(id)a0 limit:(unsigned long long)a1;
- (void).cxx_destruct;

@end
