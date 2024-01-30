@interface VCPCNNPoolingBlock : VCPCNNBlock {
    int _px;
    int _py;
    int _chunk;
}

+ (id)poolingBlockWithPoolX:(int)a0 poolY:(int)a1 chunk:(int)a2;

- (int)forward;
- (BOOL)useGPU;
- (id)initWithParameters:(int)a0 poolY:(int)a1 chunk:(int)a2;
- (int)constructBlock:(id)a0 context:(id)a1;
- (BOOL)supportGPU;

@end
