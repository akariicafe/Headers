@class BRCPrivateClientZone, NSMutableArray, NSError;

@interface BRCPCSChainEnumerator : NSEnumerator {
    unsigned long long _maxPathDepth;
    BRCPrivateClientZone *_clientZone;
    NSMutableArray *_stack;
    NSError *_error;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)error;
- (id)initWithPCSChainInfo:(id)a0 clientZone:(id)a1;

@end
