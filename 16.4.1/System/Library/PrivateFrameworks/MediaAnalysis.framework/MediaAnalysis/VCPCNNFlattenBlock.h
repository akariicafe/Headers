@interface VCPCNNFlattenBlock : VCPCNNBlock {
    int _chunk;
}

- (int)forward;
- (id)initWithParameters:(int)a0;
- (int)constructBlock:(id)a0 context:(id)a1;

@end
