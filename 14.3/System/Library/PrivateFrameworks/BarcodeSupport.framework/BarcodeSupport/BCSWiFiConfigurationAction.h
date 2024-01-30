@interface BCSWiFiConfigurationAction : BCSAction

- (id)actionPickerItems;
- (void)performDefaultAction;
- (id)localizedDefaultActionDescription;
- (id)initWithData:(id)a0 codePayload:(id)a1;
- (id)debugDescriptionExtraInfoDictionary;
- (void)performDefaultActionWithCompletionHandler:(id /* block */)a0;
- (BOOL)isWiFiAction;
- (id)_wiFiConfigurationData;

@end
