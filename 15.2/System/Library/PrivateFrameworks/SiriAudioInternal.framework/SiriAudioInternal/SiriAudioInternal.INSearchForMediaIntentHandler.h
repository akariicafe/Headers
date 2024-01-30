@interface SiriAudioInternal.INSearchForMediaIntentHandler : NSObject <INSearchForMediaIntentHandling>

- (id)init;
- (void)handleSearchForMedia:(id)a0 completion:(id /* block */)a1;
- (void)resolveMediaItemsForSearchForMedia:(id)a0 withCompletion:(id /* block */)a1;

@end
