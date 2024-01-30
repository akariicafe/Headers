@class NURenderer;

@interface NUDevice_iOS : NUDevice {
    NURenderer *_renderer;
}

- (unsigned long long)family;
- (id)_lowPriorityRenderer:(out id *)a0;
- (id)_newRendererWithOptions:(id)a0 error:(out id *)a1;
- (void).cxx_destruct;
- (id)_newNoIntermediatesRenderer:(out id *)a0;
- (id)initWithName:(id)a0;
- (id)_newMetalRendererWithOptions:(id)a0;
- (id)_newLowPriorityNoIntermediatesRenderer:(out id *)a0;
- (long long)_preferredSampleMode;
- (id)_newRenderer:(out id *)a0;
- (id)debugDescription;

@end
