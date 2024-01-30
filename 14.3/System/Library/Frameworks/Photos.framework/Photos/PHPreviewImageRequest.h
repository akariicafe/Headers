@interface PHPreviewImageRequest : PHImageRequest

- (void)startRequest;
- (BOOL)isSynchronous;
- (void)handleAvailabilityChangeForResource:(id)a0 url:(id)a1 info:(id)a2 error:(id)a3;

@end
