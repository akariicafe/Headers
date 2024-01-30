@interface SiriPlaybackControlIntents.WhatDidTheySayIntentHandler : NSObject <WhatDidTheySayIntentHandling> {
    void /* unknown type, empty encoding */ playbackController;
    void /* unknown type, empty encoding */ deviceSelector;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ assertion;
    void /* unknown type, empty encoding */ analyticsService;
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ aceServiceHelper;
}

- (void).cxx_destruct;
- (id)init;
- (void)resolveDeviceForWhatDidTheySay:(id)a0 withCompletion:(id /* block */)a1;
- (void)handleWhatDidTheySay:(id)a0 completion:(id /* block */)a1;
- (void)confirmWhatDidTheySay:(id)a0 completion:(id /* block */)a1;

@end
