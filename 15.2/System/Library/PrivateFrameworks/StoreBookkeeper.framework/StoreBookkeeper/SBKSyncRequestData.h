@interface SBKSyncRequestData : SBKRequestData

- (id)syncTransaction;
- (id)serializableRequestBodyPropertyList;
- (id)_serializableConflictDetectionValue;
- (id)_serializableConflictDetectionOrdinalForKey:(id)a0;
- (BOOL)_needsConflictDetection;
- (id)_serializableUpdateItemPayloadDictionaryForKey:(id)a0;
- (id)_serializableDeleteItemPayloadDictionaryForKey:(id)a0;

@end
