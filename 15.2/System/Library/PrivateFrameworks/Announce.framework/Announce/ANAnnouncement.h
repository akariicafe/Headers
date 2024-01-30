@class NSDate, NSString, NSArray, ANParticipant, ANLocation, NSData, NSDictionary, ANSender;

@interface ANAnnouncement : NSObject <ANCompanionMessage, ANDataMessage, NSSecureCoding>

@property (class, readonly, nonatomic) unsigned long long defaultAudioEffects;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ANParticipant *announcer;
@property (retain, nonatomic) NSArray *listeners;
@property (retain, nonatomic) NSString *messageVersion;
@property (nonatomic) unsigned long long action;
@property (retain, nonatomic) NSArray *dataItems;
@property (retain, nonatomic) ANSender *sender;
@property (retain, nonatomic) ANLocation *location;
@property (nonatomic) int productType;
@property (nonatomic) unsigned long long productTypeOverride;
@property (nonatomic) int deviceClass;
@property (readonly, nonatomic) BOOL isRelayType;
@property (readonly, nonatomic) BOOL isRelayed;
@property (readonly, nonatomic) BOOL isRelayRequest;
@property (retain, nonatomic) NSString *transcriptionText;
@property (readonly, nonatomic) NSDate *receiptTimestamp;
@property (nonatomic) unsigned long long statusFlags;
@property (retain, nonatomic) NSDate *creationTimestamp;
@property (nonatomic) unsigned long long source;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } cmStartTime;
@property (nonatomic) unsigned long long machStartTime;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSDate *playbackDeadline;
@property (retain, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSData *fileData;
@property (readonly, nonatomic) BOOL hasPlayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)sourceFromString:(id)a0;
+ (id)messageWithoutDataFromMessage:(id)a0;
+ (id)messageFromData:(id)a0 data:(id)a1;
+ (id)messageDataFromMessage:(id)a0;

- (id)message;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copy;
- (id)_stringForAction:(unsigned long long)a0;
- (id)_stringForDataType:(unsigned long long)a0;
- (id)messageForCompanion;
- (id)_generateGroupID;
- (id)_uuidFromUUIDs:(id)a0;
- (BOOL)updateWithContentsOfAnnouncement:(id)a0;
- (void)removeAudioFileDataItems;
- (void)processAudioTranscription:(id /* block */)a0;
- (BOOL)processAudioWithEffects:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isAnnouncerInSameRoomAsAccessory:(id)a0;

@end
