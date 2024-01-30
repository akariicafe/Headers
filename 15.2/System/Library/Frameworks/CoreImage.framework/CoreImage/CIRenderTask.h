@interface CIRenderTask : NSObject {
    void *_priv;
}

+ (id)rendertaskWithInternalTask:(void *)a0;

- (id)initWithInternalTask:(void *)a0;
- (id)_pdfDataRepresentation;
- (void *)internalRepresentation;
- (id)init;
- (void)dealloc;
- (id)waitUntilCompletedAndReturnError:(id *)a0;

@end
