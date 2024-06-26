@class NSString, NSArray, NSData, NSDate, NSAttributedString, NSDictionary;

@interface IMMessageItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL backwardsCompatibleVersion;
@property (nonatomic) BOOL isCorrupt;
@property (nonatomic) BOOL isSpam;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSAttributedString *body;
@property (retain, nonatomic) NSData *bodyData;
@property (retain, nonatomic) NSData *payloadData;
@property (retain, nonatomic) NSString *expressiveSendStyleID;
@property (retain, nonatomic) NSDate *timeExpressiveSendPlayed;
@property (retain, nonatomic) NSDate *timeRead;
@property (retain, nonatomic) NSDate *timeDelivered;
@property (retain, nonatomic) NSDate *timePlayed;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) long long expireState;
@property (retain, nonatomic) NSArray *fileTransferGUIDs;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) long long replaceID;
@property (nonatomic) BOOL hasDataDetectorResults;
@property (nonatomic) BOOL blockingRichLinks;
@property (readonly, nonatomic) BOOL isDelivered;
@property (readonly, nonatomic) BOOL isSent;
@property (readonly, nonatomic) BOOL isRead;
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isAlert;
@property (readonly, nonatomic) BOOL wasDataDetected;
@property (readonly, nonatomic) BOOL wasDowngraded;
@property (readonly, nonatomic) BOOL isPrepared;
@property (readonly, nonatomic) BOOL isTypingMessage;
@property (readonly, nonatomic) BOOL isLocatingMessage;
@property (readonly, nonatomic) BOOL isEmote;
@property (readonly, nonatomic) BOOL isAudioMessage;
@property (readonly, nonatomic) BOOL isExpirable;
@property (readonly, nonatomic) BOOL isFromExternalSource;
@property (nonatomic) BOOL hasUnseenMention;
@property (nonatomic) BOOL isBeingRetried;
@property (retain, nonatomic) NSString *retryToParticipant;
@property (retain, nonatomic) NSString *notificationIDSTokenURI;
@property (readonly, copy, nonatomic) NSAttributedString *breadcrumbText;
@property (retain, nonatomic) NSString *plainBody;
@property (retain, nonatomic) NSData *typingIndicatorIcon;
@property (retain, nonatomic) NSData *contactsAvatarRecipeData;
@property (nonatomic, getter=isUpdatingDataSourcePayload) BOOL updatingDataSourcePayload;
@property (retain, nonatomic) NSDictionary *messageSummaryInfo;
@property (retain, nonatomic) NSDictionary *bizIntent;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) BOOL isSOS;
@property (nonatomic) BOOL NicknameRequested;
@property (nonatomic) BOOL shouldSendMeCard;
@property (copy, nonatomic) NSString *suggestedAuthorName;
@property (copy, nonatomic) NSString *suggestedAuthorAvatarPath;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (retain, nonatomic) IMMessageItem *threadOriginator;
@property (copy, nonatomic) NSDictionary *replyCountsByPart;

+ (unsigned long long)partKeyForAttachmentGUID:(id)a0 inBody:(id)a1;
+ (BOOL)messageContainsSurfDD:(id)a0;
+ (id)newMessageItemFrom:(id)a0 withText:(id)a1 deleteSubject:(BOOL)a2 withFileTransferGUIDs:(id)a3;
+ (id)_messageItemWithIndexesDeleted:(id)a0 subRangesToDeleteMapping:(id)a1 deleteSubject:(BOOL)a2 deleteTransferCallback:(id /* block */)a3 createItemCallback:(id /* block */)a4 fromMessageItem:(id)a5;

- (id)initWithSenderInfo:(id)a0 time:(id)a1 timeRead:(id)a2 timeDelivered:(id)a3 timePlayed:(id)a4 subject:(id)a5 body:(id)a6 bodyData:(id)a7 attributes:(id)a8 fileTransferGUIDs:(id)a9 flags:(unsigned long long)a10 guid:(id)a11 messageID:(long long)a12 account:(id)a13 accountID:(id)a14 service:(id)a15 handle:(id)a16 roomName:(id)a17 unformattedID:(id)a18 countryCode:(id)a19 expireState:(long long)a20 balloonBundleID:(id)a21 payloadData:(id)a22 expressiveSendStyleID:(id)a23 timeExpressiveSendPlayed:(id)a24 bizIntent:(id)a25 locale:(id)a26 errorType:(unsigned int)a27 type:(long long)a28 threadIdentifier:(id)a29;
- (id)initWithSenderInfo:(id)a0 time:(id)a1 timeRead:(id)a2 timeDelivered:(id)a3 timePlayed:(id)a4 subject:(id)a5 body:(id)a6 bodyData:(id)a7 attributes:(id)a8 fileTransferGUIDs:(id)a9 flags:(unsigned long long)a10 guid:(id)a11 messageID:(long long)a12 account:(id)a13 accountID:(id)a14 service:(id)a15 handle:(id)a16 roomName:(id)a17 unformattedID:(id)a18 countryCode:(id)a19 expireState:(long long)a20 balloonBundleID:(id)a21 payloadData:(id)a22 expressiveSendStyleID:(id)a23 timeExpressiveSendPlayed:(id)a24 bizIntent:(id)a25 locale:(id)a26 errorType:(unsigned int)a27 threadIdentifier:(id)a28;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)sender;
- (unsigned long long)powerLogMessageType;
- (id)initWithCoder:(id)a0;
- (void)_updateFlags:(unsigned long long)a0;
- (void)enumerateAttachmentGUIDsWithBlock:(id /* block */)a0;
- (void)_generateBodyDataIfNeeded;
- (id)initWithDictionary:(id)a0 hint:(id)a1;
- (void)_generateBodyTextIfNeeded;
- (id)copyWithFlags:(unsigned long long)a0;
- (id)initWithSender:(id)a0 time:(id)a1 body:(id)a2 attributes:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 type:(long long)a8 threadIdentifier:(id)a9;
- (void)adjustIsEmptyFlag;
- (void)_regenerateBodyData;
- (void)_regenerateBodyText;
- (void)_clearBodyData;
- (unsigned long long)partKeyForAttachmentGUID:(id)a0;
- (id)_localizedBackwardsCompatibleExpressiveSendText;
- (id)copyForBackwardsCompatibility;
- (id)initWithSender:(id)a0 time:(id)a1 body:(id)a2 attributes:(id)a3 fileTransferGUIDs:(id)a4 flags:(unsigned long long)a5 error:(id)a6 guid:(id)a7 threadIdentifier:(id)a8;
- (id)initWithSenderInfo:(id)a0 time:(id)a1 guid:(id)a2 messageID:(long long)a3 account:(id)a4 accountID:(id)a5 service:(id)a6 handle:(id)a7 roomName:(id)a8 unformattedID:(id)a9 countryCode:(id)a10;
- (void)setWasDataDetected:(BOOL)a0;
- (id)description;
- (BOOL)isFromMe;
- (BOOL)isEqual:(id)a0;
- (BOOL)isReply;
- (id)initWithDictionary:(id)a0;
- (id)attachmentGUIDAtIndex:(unsigned long long)a0;
- (id)copyDictionaryRepresentation;
- (id)initWithSender:(id)a0 time:(id)a1 guid:(id)a2 type:(long long)a3;
- (BOOL)isFirstMessageCandidate;
- (BOOL)isLastMessageCandidate;
- (void)encodeWithCoder:(id)a0;

@end
