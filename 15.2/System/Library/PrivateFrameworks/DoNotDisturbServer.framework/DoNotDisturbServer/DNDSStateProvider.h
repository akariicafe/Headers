@class DNDState, DNDSModeConfigurationManager, DNDSStateProviderSystemSnapshot;

@interface DNDSStateProvider : NSObject {
    DNDSModeConfigurationManager *_modeConfigurationManager;
}

@property (copy) DNDSStateProviderSystemSnapshot *lastSystemSnapshot;
@property (copy) DNDState *lastCalculatedState;

- (id)recalculateStateForSnapshot:(id)a0;
- (void).cxx_destruct;
- (id)initWithModeConfigurationManager:(id)a0;

@end
