@interface SCNMTLArgumentBinder : NSObject {
    id /* block */ _block;
    int _frequency;
    BOOL _needsRenderResource;
}

- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0 frequency:(int)a1 needsRenderResource:(BOOL)a2;

@end
