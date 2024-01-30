@interface NUExportJob : NURenderJob

- (id)initWithRequest:(id)a0;
- (id)result;
- (BOOL)wantsCompleteStage;
- (id)scalePolicy;
- (id)initWithExportRequest:(id)a0;
- (id)exportRequest;

@end
