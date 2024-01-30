@interface CalConferencePersistence : NSObject

+ (id)serializeConference:(id)a0 serializationBlockTitle:(id)a1;
+ (id)deserializeConference:(id)a0;
+ (id)updateHTML:(id)a0 withEventNotes:(id)a1;
+ (id)_knownPersistenceFormats;
+ (id)_htmlSerializedConference:(id)a0 serializationBlockTitle:(id)a1;

@end
