@interface CDMVocUsoGraphMapper : NSObject

+ (id)buildVocUSOGraphWithVocLabel:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildVocUSOGraphForRegexOrdinal:(unsigned int)a0 withVocLabel:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (struct unique_ptr<siri::ontology::UsoIdentifier, std::default_delete<siri::ontology::UsoIdentifier>> { struct __compressed_pair<siri::ontology::UsoIdentifier *, std::default_delete<siri::ontology::UsoIdentifier>> { struct UsoIdentifier *x0; } x0; })buildIdentifierWithSemantic:(id)a0 withVocLabel:(id)a1;
+ (id)buildSettingUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildContactTypeUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildEmailContactUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildPhoneContactUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildDeviceCategoryUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildEmergencyPhoneNumberUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildEmgerencyPhoneAgentUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildPhoneNumberRegexUSOGraphWithIdentifier:(id)a0 withInput:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;
+ (id)buildEmailAddressRegexUSOGraphWithIdentifier:(id)a0 withInput:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;
+ (id)buildAppNameUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildNumberPowerOfTenUSOGraph:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildIntegerRegexUSOGraphWithIdentifier:(id)a0 withInput:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;
+ (id)buildDecimalRegexUSOGraphWithIdentifier:(id)a0 withInput:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;
+ (id)buildPersonRelationshipUSOGraphWithIdentifier:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildVocUSOGraphForHandsFreeListPosition:(id)a0 withSemantic:(id)a1 withInput:(id)a2 withStartCharIndex:(unsigned int)a3 withEndCharIndex:(unsigned int)a4;
+ (id)buildFractionNumberUSOGraphWithIdentifier:(id)a0 withFractionSemantic:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;
+ (id)buildSmsAttributesUSOGraph:(id)a0 withFractionSemantic:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;
+ (id)buildAttachmentTypeUSOGraph:(id)a0 withSemantic:(id)a1 withStartCharIndex:(unsigned int)a2 withEndCharIndex:(unsigned int)a3;

@end
