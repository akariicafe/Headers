@interface PBCallbackSerialization : NSObject {
    id /* block */ _endBlock;
    BOOL _hasBegun;
    BOOL _hasEnded;
}

- (void).cxx_destruct;
- (void)sendEndBlock:(id /* block */)a0;
- (void)sendBeginBlock:(id /* block */)a0;

@end
