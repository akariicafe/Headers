@class NSDate, NSString, NSArray, NSURL, ANLocation, ANParticipant, NSDictionary, NSData, ANSender;

@interface ANAnnouncement : NSObject <ANCompanionMessage, ANDataMessage, NSSecureCoding>

@property (class, readonly, nonatomic) unsigned long long defaultAudioEffects;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *remoteSessionDictionary;
@property (readonly, nonatomic) NSDictionary *sendFailureDictionary;
@property (readonly, nonatomic) NSURL *defaultActionURL;
@property (retain, nonatomic) ANParticipant *announcer;
@property (retain, nonatomic) NSArray *listeners;
@property (retain, nonatomic) NSString *messageVersion;
@property (nonatomic) unsigned long long action;
@property (retain, nonatomic) NSArray *dataItems;
@property (retain, nonatomic) ANSender *sender;
@property (retain, nonatomic) ANLocation *location;
@property (nonatomic) int productType;
@property (nonatomic) int deviceClass;
@property (readonly, nonatomic) BOOL isRelayType;
@property (readonly, nonatomic) BOOL isRelayed;
@property (readonly, nonatomic) BOOL isRelayRequest;
@property (retain, nonatomic) NSString *transcriptionText;
@property (readonly, nonatomic) NSDate *receiptTimestamp;
@property (nonatomic) unsigned long long statusFlags;
@property (retain, nonatomic) NSDate *creationTimestamp;
@property (nonatomic) unsigned long long source;
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

+ (void)uniqueAnnouncersInAnnouncements:(id)a0 inHome:(id)a1 withBlock:(id /* block */)a2;
+ (unsigned long long)sourceFromString:(id)a0;
+ (id)messageWithoutDataFromMessage:(id)a0;
+ (id)messageFromData:(id)a0 data:(id)a1;
+ (id)messageDataFromMessage:(id)a0;

- (id)_stringForAction:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)message;
- (id)initWithMessage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_stringForDataType:(unsigned long long)a0;
- (id)messageForCompanion;
- (id)announcerNameInHome:(id)a0;
- (id)_generateGroupID;
- (id)_uuidFromUUIDs:(id)a0;
- (BOOL)updateWithContentsOfAnnouncement:(id)a0;
- (void)removeAudioFileDataItems;
- (void)processAudioTranscription:(id /* block */)a0;
- (BOOL)processAudioWithEffects:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isAnnouncerInSameRoomAsAccessory:(id)a0;

@end
