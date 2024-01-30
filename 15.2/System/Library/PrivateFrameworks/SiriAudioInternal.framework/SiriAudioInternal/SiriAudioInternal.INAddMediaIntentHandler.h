@interface SiriAudioInternal.INAddMediaIntentHandler : NSObject <INAddMediaIntentHandling> {
    void /* unknown type, empty encoding */ library;
    void /* unknown type, empty encoding */ nowPlaying;
    void /* unknown type, empty encoding */ subscription;
    void /* unknown type, empty encoding */ provider;
    void /* unknown type, empty encoding */ instanceReference;
}

- (void).cxx_destruct;
- (id)init;
- (void)handleAddMedia:(id)a0 completion:(id /* block */)a1;
- (void)resolveMediaItemsForAddMedia:(id)a0 withCompletion:(id /* block */)a1;
- (void)resolveMediaDestinationForAddMedia:(id)a0 withCompletion:(id /* block */)a1;

@end
