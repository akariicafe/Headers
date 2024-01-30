@interface WFImgurUploadAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)targetContentAttribution;
- (void)uploadInput:(id)a0 withAccount:(id)a1;

@end
