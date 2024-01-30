@class NURenderer;

@interface NUDevice_iOS : NUDevice {
    NURenderer *_renderer;
}

- (void).cxx_destruct;
- (unsigned long long)family;
- (id)debugDescription;
- (id)initWithName:(id)a0;
- (BOOL)hasOpenGLSupport;
- (long long)_defaultSampleMode;
- (long long)_openGLVirtualScreen;
- (id)_newRenderer:(out id *)a0;
- (id)_lowPriorityRenderer:(out id *)a0;
- (id)_newNoIntermediatesRenderer:(out id *)a0;
- (id)_newLowPriorityNoIntermediatesRenderer:(out id *)a0;
- (id)_newRendererWithOptions:(id)a0 error:(out id *)a1;
- (id)_newMetalRendererWithOptions:(id)a0;
- (id)_newOpenGLRendererWithOptions:(id)a0 error:(out id *)a1;

@end
