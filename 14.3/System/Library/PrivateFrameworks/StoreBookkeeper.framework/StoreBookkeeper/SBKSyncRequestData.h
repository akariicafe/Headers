@interface SBKSyncRequestData : SBKRequestData

- (id)syncTransaction;
- (id)_serializableUpdateItemPayloadDictionaryForKey:(id)a0;
- (id)_serializableDeleteItemPayloadDictionaryForKey:(id)a0;
- (id)_serializableConflictDetectionValue;
- (BOOL)_needsConflictDetection;
- (id)_serializableConflictDetectionOrdinalForKey:(id)a0;
- (id)serializableRequestBodyPropertyList;

@end
