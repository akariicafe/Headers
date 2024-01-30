@class NSString, NSNumber, NSDate;

@interface SSRVoiceProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *profileBasePath;
@property (readonly, nonatomic) NSString *voiceProfileBasePath;
@property (readonly, nonatomic) NSString *voiceProfileImplicitCacheDirPath;
@property (readonly, nonatomic) NSString *voiceProfileIdentity;
@property (readonly, nonatomic) unsigned long long voiceProfileVersion;
@property (readonly, nonatomic) unsigned long long productCategory;
@property (readonly, nonatomic) NSString *pruningCookie;
@property (readonly, nonatomic) BOOL profileLocallyAvailable;
@property (retain, nonatomic) NSNumber *profilePitch;
@property (retain, nonatomic) NSString *userName;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) NSString *appDomain;
@property (readonly, nonatomic) NSDate *dateAdded;
@property (readonly, nonatomic) NSString *profileID;
@property (readonly, nonatomic) NSString *siriProfileId;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)_copyExplicitAudio:(id)a0 withSpIdType:(unsigned long long)a1;
- (id)_getProfileVersionFilePath;
- (BOOL)_isSATMarkedWithMarker:(id)a0;
- (BOOL)_markSATEnrollmentWithMarker:(id)a0;
- (void)_updateVoiceProfileVersionFile;
- (id)_voiceProfilePathForSpidType:(unsigned long long)a0;
- (id)addUtterances:(id)a0 spIdType:(unsigned long long)a1;
- (BOOL)deleteModelForSpidType:(unsigned long long)a0 recognizerType:(unsigned long long)a1;
- (id)getEnrollmentUtterancesForModelType:(unsigned long long)a0;
- (id)getExplicitEnrollmentUtterancesForType:(unsigned long long)a0;
- (id)getExplicitMarkedEnrollmentUtterancesForType:(unsigned long long)a0;
- (id)getImplicitEnrollmentUtterancesForType:(unsigned long long)a0;
- (id)getImplicitEnrollmentUtterancesPriorTo:(id)a0 forType:(unsigned long long)a1;
- (id)importVoiceProfileAtPath:(id)a0;
- (id)initNewVoiceProfileWithLocale:(id)a0 withAppDomain:(id)a1;
- (BOOL)isMarkedSATEnrolled;
- (BOOL)isMarkedSATMigrated;
- (BOOL)markSATEnrollmentMigrated;
- (BOOL)markSATEnrollmentSuccess;
- (void)setSharedSiriProfileId:(id)a0;
- (BOOL)updatePruningCookie:(id)a0;
- (id)voiceProfileAudioDirPathForSpidType:(unsigned long long)a0;
- (id)voiceProfileModelDirForSpidType:(unsigned long long)a0 recognizerType:(unsigned long long)a1;
- (id)voiceProfileModelFilePathForRecognizerType:(unsigned long long)a0 spIdType:(unsigned long long)a1;

@end
