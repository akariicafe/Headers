@class TLAlert;

@interface TLAlertQueuePlayerStateDescriptor : NSObject {
    BOOL _hasInvokedCompletionHandlerForPlayingAlert;
}

@property (readonly, nonatomic) TLAlert *playingAlert;
@property (readonly, nonatomic) id /* block */ playingAlertCompletionHandler;
@property (nonatomic, getter=isAlertActivationAssertionAcquired) BOOL alertActivationAssertionAcquired;
@property (retain, nonatomic) TLAlert *alertForAudioEnvironmentSetup;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)_descriptionForDebugging:(BOOL)a0;
- (id)initWithPlayingAlert:(id)a0 completionHandler:(id /* block */)a1 previousStateDescriptor:(id)a2;
- (id)_initForRelinquishingActivationAssertionWithAlertForAudioEnvironmentSetup:(id)a0 previousStateDescriptor:(id)a1;
- (void)_transferPlayingAlertAndCompletionHandlerFromPreviousStateDescriptor:(id)a0;
- (id)initForAcquiringActivationAssertionWithAlertForAudioEnvironmentSetup:(id)a0 previousStateDescriptor:(id)a1;
- (void)invokePlayingAlertCompletionHandlerWithPlaybackCompletionType:(long long)a0 error:(id)a1;
- (id)stateDescriptorByRelinquishingActivationAssertion;
- (id)stateDescriptorForCompletedPlayback;

@end
