@interface BCSWiFiConfigurationAction : BCSAction

- (void)performDefaultAction;
- (id)actionPickerItems;
- (id)localizedDefaultActionDescription;
- (id)actionIcon;
- (id)_wiFiConfigurationData;
- (id)debugDescriptionExtraInfoDictionary;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (BOOL)isWiFiAction;
- (void)performDefaultActionWithCompletionHandler:(id /* block */)a0;

@end
