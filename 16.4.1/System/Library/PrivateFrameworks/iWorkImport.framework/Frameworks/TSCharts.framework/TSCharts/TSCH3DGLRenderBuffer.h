@class NSString;

@interface TSCH3DGLRenderBuffer : NSObject <TSCH3DGLBindable> {
    unsigned int _buffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)valid;
- (void)dealloc;
- (void)bindInSession:(id)a0;
- (void)deactivateInContext:(id)a0;
- (void)destroyResourcesInContext:(id)a0;
- (id)initWithGLBuffer:(unsigned int)a0;

@end
