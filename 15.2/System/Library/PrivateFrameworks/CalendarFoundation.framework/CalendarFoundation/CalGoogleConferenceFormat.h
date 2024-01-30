@interface CalGoogleConferenceFormat : NSObject <CalConferencePersistenceFormat>

+ (id)calConferenceSerializationHandle;
+ (id)_delimiterRegex;

- (id)serializeConference:(id)a0 serializationBlockTitle:(id)a1;
- (BOOL)supportsSerializingConferenceWithSource:(unsigned long long)a0;
- (id)deserializeConferences:(id)a0;

@end
