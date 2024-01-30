@interface HMDAccessorySettingsMessageHandlerRoar : HMDAccessorySettingsMessageHandler

- (void)relayReplaceConstraints:(id)a0 constraintIdsToRemove:(id)a1 keyPath:(id)a2 destination:(id)a3 completion:(id /* block */)a4;
- (void)relayUpdateValue:(id)a0 keyPath:(id)a1 destination:(id)a2 completion:(id /* block */)a3;

@end
