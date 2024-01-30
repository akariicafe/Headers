@protocol NUVideoProperties;

@interface NUVideoPropertiesJob : NURenderJob {
    id<NUVideoProperties> _videoProperties;
}

- (id)result;
- (void).cxx_destruct;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;

@end
