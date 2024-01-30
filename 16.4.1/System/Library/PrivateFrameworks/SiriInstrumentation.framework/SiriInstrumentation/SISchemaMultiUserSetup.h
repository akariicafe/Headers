@class NSData;

@interface SISchemaMultiUserSetup : SISchemaInstrumentationMessage {
    struct { unsigned char numGuestsAccepted : 1; unsigned char numParticipantsWithTrust : 1; unsigned char numUsersWhoSyncedRecognizeMyVoice : 1; unsigned char numUsersWithRecognizeMyVoiceEnabled : 1; unsigned char numVoiceProfilesAvailable : 1; } _has;
}

@property (nonatomic) unsigned int numGuestsAccepted;
@property (nonatomic) BOOL hasNumGuestsAccepted;
@property (nonatomic) unsigned int numParticipantsWithTrust;
@property (nonatomic) BOOL hasNumParticipantsWithTrust;
@property (nonatomic) unsigned int numUsersWhoSyncedRecognizeMyVoice;
@property (nonatomic) BOOL hasNumUsersWhoSyncedRecognizeMyVoice;
@property (nonatomic) unsigned int numUsersWithRecognizeMyVoiceEnabled;
@property (nonatomic) BOOL hasNumUsersWithRecognizeMyVoiceEnabled;
@property (nonatomic) unsigned int numVoiceProfilesAvailable;
@property (nonatomic) BOOL hasNumVoiceProfilesAvailable;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteNumVoiceProfilesAvailable;
- (void)deleteNumGuestsAccepted;
- (void)deleteNumParticipantsWithTrust;
- (void)deleteNumUsersWhoSyncedRecognizeMyVoice;
- (void)deleteNumUsersWithRecognizeMyVoiceEnabled;

@end
