@class BMUserFocusComputedModeStream;

@interface DNDSBiomeDonationManager : NSObject {
    BMUserFocusComputedModeStream *_computedModeStream;
}

- (void)_donateEventForStateUpdate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)handleStateUpdate:(id)a0;

@end
