@class NSString;

@interface MCConferenceRoomDisplayPayload : MCPayload

@property (readonly, copy, nonatomic) NSString *customMessage;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)configuration;
- (id)stubDictionary;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (void).cxx_destruct;

@end
