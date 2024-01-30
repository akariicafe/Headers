@class NSCondition;

@interface TSUFastReadInvalidatingCache : NSObject {
    id /* block */ mGenerator;
    _Atomic id mValue;
    _Atomic long long mReaderCount;
    _Atomic id mToDispose;
    BOOL mReentrant;
    NSCondition *mCondition;
    BOOL mIsGenerating;
}

- (void)dealloc;
- (id)value;
- (void)invalidate;
- (void)p_setValue:(id)a0;
- (id)initForReentrant:(BOOL)a0 withGenerator:(id /* block */)a1;

@end
