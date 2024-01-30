@interface Coherence.CRStringEncoder : NSObject {
    void /* unknown type, empty encoding */ sequence;
    void /* unknown type, empty encoding */ subsequence;
}

- (void)setStorage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setCharWithId:(unsigned int)a0 clock:(unsigned int)a1;
- (void)setWithLength:(unsigned int)a0;
- (void)addAddedById:(unsigned int)a0 clock:(unsigned int)a1;
- (void)addChildWithId:(unsigned int)a0;
- (void)finishSubstring;
- (void)setWithVersion:(id)a0;
- (void)setWithAddedByVersion:(id)a0;

@end
