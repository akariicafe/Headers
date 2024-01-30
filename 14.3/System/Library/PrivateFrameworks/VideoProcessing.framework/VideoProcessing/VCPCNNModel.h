@class VCPCNNData, VCPCNNMetalContext, VCPCNNBlock;

@interface VCPCNNModel : NSObject {
    VCPCNNBlock *_blocks[200];
    short _quantFactor;
    BOOL _useGPU;
    VCPCNNMetalContext *_context;
}

@property (readonly) VCPCNNData *output;

- (int)add:(id)a0;
- (id)init;
- (id)initWithParameters:(short)a0 useGPU:(BOOL)a1;
- (void).cxx_destruct;
- (id)getGPUContext;
- (int)prepareNetworkFromURL:(id)a0 withInputSize:(id)a1;
- (int)size;
- (int)dynamicForward:(id)a0 paramFileUrl:(id)a1 cancel:(id /* block */)a2;
- (int)forward:(id)a0;

@end
