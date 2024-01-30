@class NSString;

@interface PSGPBEngagement : PBCodable <NSCopying> {
    struct { unsigned char dataSourceType : 1; unsigned char maxPredictionItems : 1; unsigned char maxStructuredInfoItems : 1; unsigned char maxTextualResponseItems : 1; unsigned char numStructuredInfoItems : 1; unsigned char numTextualResponseItems : 1; unsigned char position : 1; unsigned char triggerSourceType : 1; unsigned char hasContextBeforeInput : 1; unsigned char hasRecipientNames : 1; unsigned char hasResponseContext : 1; unsigned char isDocumentEmpty : 1; unsigned char isResponseContextBlacklisted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) BOOL hasTreatmentName;
@property (retain, nonatomic) NSString *treatmentName;
@property (nonatomic) BOOL hasHasResponseContext;
@property (nonatomic) BOOL hasResponseContext;
@property (nonatomic) BOOL hasIsResponseContextBlacklisted;
@property (nonatomic) BOOL isResponseContextBlacklisted;
@property (nonatomic) BOOL hasIsDocumentEmpty;
@property (nonatomic) BOOL isDocumentEmpty;
@property (readonly, nonatomic) BOOL hasTextContentType;
@property (retain, nonatomic) NSString *textContentType;
@property (nonatomic) BOOL hasHasContextBeforeInput;
@property (nonatomic) BOOL hasContextBeforeInput;
@property (nonatomic) BOOL hasHasRecipientNames;
@property (nonatomic) BOOL hasRecipientNames;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL hasMaxTextualResponseItems;
@property (nonatomic) unsigned int maxTextualResponseItems;
@property (nonatomic) BOOL hasMaxStructuredInfoItems;
@property (nonatomic) unsigned int maxStructuredInfoItems;
@property (nonatomic) BOOL hasMaxPredictionItems;
@property (nonatomic) unsigned int maxPredictionItems;
@property (readonly, nonatomic) BOOL hasInitiatingProcess;
@property (retain, nonatomic) NSString *initiatingProcess;
@property (nonatomic) BOOL hasNumTextualResponseItems;
@property (nonatomic) unsigned int numTextualResponseItems;
@property (readonly, nonatomic) BOOL hasTextualResponseCategory;
@property (retain, nonatomic) NSString *textualResponseCategory;
@property (nonatomic) BOOL hasNumStructuredInfoItems;
@property (nonatomic) unsigned int numStructuredInfoItems;
@property (nonatomic) BOOL hasDataSourceType;
@property (nonatomic) int dataSourceType;
@property (nonatomic) BOOL hasTriggerSourceType;
@property (nonatomic) int triggerSourceType;
@property (readonly, nonatomic) BOOL hasTriggerCategory;
@property (retain, nonatomic) NSString *triggerCategory;
@property (readonly, nonatomic) BOOL hasTriggerAttributeType;
@property (retain, nonatomic) NSString *triggerAttributeType;
@property (readonly, nonatomic) BOOL hasTriggerAttributeSubtype;
@property (retain, nonatomic) NSString *triggerAttributeSubtype;
@property (readonly, nonatomic) BOOL hasTriggerAttributeField;
@property (retain, nonatomic) NSString *triggerAttributeField;
@property (nonatomic) BOOL hasPosition;
@property (nonatomic) unsigned int position;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)dataSourceTypeAsString:(int)a0;
- (int)StringAsDataSourceType:(id)a0;
- (id)triggerSourceTypeAsString:(int)a0;
- (int)StringAsTriggerSourceType:(id)a0;

@end
