@interface SCNMTLSemanticResourceBinding : SCNMTLResourceBinding {
    struct { id /* block */ x0; unsigned int x1; unsigned int x2; } *_semantics;
}

@property (nonatomic) long long semanticsCount;
@property (nonatomic) long long bufferSize;

- (void)dealloc;

@end
