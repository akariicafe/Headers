@class CESRUserData, NSString, NSArray, NSData, NSURL, NSMutableArray;

@interface CESRFidesASRRecord : NSObject <NSSecureCoding> {
    double _collectedAudioDurationMS;
    BOOL _audioExceededMaxDuration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *pluginId;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *task;
@property (readonly, nonatomic) unsigned long long samplingRate;
@property (readonly, nonatomic) BOOL farField;
@property (readonly, copy, nonatomic) NSArray *context;
@property (readonly, copy, nonatomic) NSString *UUIDString;
@property (readonly, copy, nonatomic) NSMutableArray *audioPackets;
@property (readonly, nonatomic) BOOL hasRecognizedAnything;
@property (readonly, copy, nonatomic) NSString *interactionIdentifier;
@property (readonly, copy, nonatomic) NSString *asrSelfComponentIdentifier;
@property (copy, nonatomic) NSString *correctedText;
@property (copy, nonatomic) NSArray *recognizedText;
@property (copy, nonatomic) NSString *postITNRecognizedText;
@property (nonatomic) BOOL personalizedLMUsed;
@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *date;
@property (readonly, nonatomic) double timestamp;
@property (copy, nonatomic) NSArray *alternatives;
@property (retain, nonatomic) NSData *profile;
@property (retain, nonatomic) CESRUserData *userData;
@property (copy, nonatomic) NSURL *originalAudioFileURL;

+ (id)recordFromData:(id)a0;
+ (void)deleteAllRecordsForPlugin:(id)a0 completion:(id /* block */)a1;
+ (id)recordWithLanguage:(id)a0 task:(id)a1 context:(id)a2 narrowband:(BOOL)a3 farField:(BOOL)a4 interactionIdentifier:(id)a5 asrSelfComponentIdentifier:(id)a6 pluginId:(id)a7;
+ (id)recordWithLanguage:(id)a0 task:(id)a1 context:(id)a2 narrowband:(BOOL)a3 farField:(BOOL)a4 interactionIdentifier:(id)a5 asrSelfComponentIdentifier:(id)a6 pluginId:(id)a7 frequency:(unsigned long long)a8;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)save;
- (void)addAudioPacket:(id)a0;
- (BOOL)hasData;
- (id)description;
- (void).cxx_destruct;
- (id)_recordData;
- (void)markRecognition;
- (double)_audioPacketsDuration;
- (id)_recordInfo;
- (id)concatenatedAudioPackets;
- (id)initWithLanguage:(id)a0 task:(id)a1 context:(id)a2 narrowband:(BOOL)a3 farField:(BOOL)a4 interactionIdentifier:(id)a5 asrSelfComponentIdentifier:(id)a6 pluginId:(id)a7;
- (void)saveOneRecordPerDay;
- (id)todaysDate;

@end
