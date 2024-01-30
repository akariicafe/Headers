@interface IDSGlobalLinkBlocks : NSObject {
    id /* block */ _qraREQBlock;
    id /* block */ _qraAWDBlock;
    id /* block */ _qraCONBlock;
    id /* block */ _qraDISBlock;
}

- (void).cxx_destruct;
- (id)initWithBlocks:(id /* block */)a0 qraAWDBlock:(id /* block */)a1 qraCONBlock:(id /* block */)a2 qraDISBlock:(id /* block */)a3;

@end
