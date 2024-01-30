@class NSString;

@interface MCConferenceRoomDisplayPayload : MCPayload

@property (readonly, copy, nonatomic) NSString *customMessage;

+ (id)localizedPluralForm;
+ (id)typeStrings;
+ (id)localizedSingularForm;

- (id)configuration;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end
