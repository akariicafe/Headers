@class BMUserFocusComputedModeStream;

@interface DNDSBiomeDonationManager : NSObject {
    BMUserFocusComputedModeStream *_computedModeStream;
}

- (void)handleStateUpdate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_donateEventForStateUpdate:(id)a0;

@end
