@protocol NUImageProperties;

@interface NUImagePropertiesJob : NURenderJob {
    id<NUImageProperties> _imageProperties;
}

- (void).cxx_destruct;
- (id)result;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;

@end
