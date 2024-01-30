@class VCPCNNData, VCPCNNMetalContext, VCPCNNBlock;

@interface VCPCNNModel : NSObject {
    VCPCNNBlock *_blocks[200];
    short _quantFactor;
    BOOL _useGPU;
    VCPCNNMetalContext *_context;
}

@property (readonly) VCPCNNData *output;

- (int)add:(id)a0;
- (int)size;
- (void).cxx_destruct;
- (id)init;
- (id)initWithParameters:(short)a0 useGPU:(BOOL)a1;
- (id)getGPUContext;
- (int)prepareNetworkFromURL:(id)a0 withInputSize:(id)a1;
- (int)forward:(id)a0;
- (int)dynamicForward:(id)a0 paramFileUrl:(id)a1 cancel:(id /* block */)a2;

@end
