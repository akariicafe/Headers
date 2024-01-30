@interface WFSetParkedCarAction : WFAction

- (id)contentDestinationWithError:(id *)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)fetchLastParkedCarContentItemWithCompletionHandler:(id /* block */)a0;
- (BOOL)locationParameterIsCurrentLocation;
- (id)missingLocationError;
- (id)resizedCompressedJPEGImageDataWithWFImage:(id)a0;

@end
