@class NSData;

@interface PLUSSchemaPLUSContactSuggestionUsageSummary : SISchemaInstrumentationMessage {
    struct { unsigned char suggestionGenerationTimeSince1970InMs : 1; unsigned char timeUntilFirstActivationInMs : 1; unsigned char averageTimeBetweenActivationsInMs : 1; unsigned char activationCount : 1; unsigned char presentationCount : 1; unsigned char confirmationSelectedCount : 1; unsigned char disambiguationSelectedCount : 1; unsigned char abandonmentCount : 1; unsigned char domain : 1; } _has;
}

@property (nonatomic) unsigned long long suggestionGenerationTimeSince1970InMs;
@property (nonatomic) BOOL hasSuggestionGenerationTimeSince1970InMs;
@property (nonatomic) unsigned long long timeUntilFirstActivationInMs;
@property (nonatomic) BOOL hasTimeUntilFirstActivationInMs;
@property (nonatomic) unsigned long long averageTimeBetweenActivationsInMs;
@property (nonatomic) BOOL hasAverageTimeBetweenActivationsInMs;
@property (nonatomic) unsigned int activationCount;
@property (nonatomic) BOOL hasActivationCount;
@property (nonatomic) unsigned int presentationCount;
@property (nonatomic) BOOL hasPresentationCount;
@property (nonatomic) unsigned int confirmationSelectedCount;
@property (nonatomic) BOOL hasConfirmationSelectedCount;
@property (nonatomic) unsigned int disambiguationSelectedCount;
@property (nonatomic) BOOL hasDisambiguationSelectedCount;
@property (nonatomic) unsigned int abandonmentCount;
@property (nonatomic) BOOL hasAbandonmentCount;
@property (nonatomic) int domain;
@property (nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteConfirmationSelectedCount;
- (void)deleteAbandonmentCount;
- (void)deleteActivationCount;
- (void)deleteAverageTimeBetweenActivationsInMs;
- (void)deleteDisambiguationSelectedCount;
- (void)deleteDomain;
- (void)deletePresentationCount;
- (void)deleteSuggestionGenerationTimeSince1970InMs;
- (void)deleteTimeUntilFirstActivationInMs;

@end
