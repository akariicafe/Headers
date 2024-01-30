@class IMDChat, NSString, NSArray, NSDictionary, NSNumber, NSAttributedString;

@interface IMTextMessagePipelineParameter : NSObject <IMFindChatProcessingParameter, IMTextMessageProcessingParameter, IMMessageLegacyProcessingParameter, IMMessageFromStorageParameter, IMMessageMomentShareProcessingParameter, IMJunkMessagePipelineParameter, IMFamilyMessagePipelineParameter>

@property (copy, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSNumber *timestamp;
@property (nonatomic) BOOL wantsDeliveryReceipt;
@property (nonatomic) BOOL wantsCheckpointing;
@property (nonatomic) BOOL isFromStorage;
@property (nonatomic) BOOL isLastFromStorage;
@property (copy, nonatomic) NSString *fromIdentifier;
@property (copy, nonatomic) NSString *toIdentifier;
@property (nonatomic) BOOL isFromMe;
@property (copy, nonatomic) NSString *plainTextBody;
@property (copy, nonatomic) NSString *plainTextSubject;
@property (copy, nonatomic) NSAttributedString *richBody;
@property (retain, nonatomic) NSArray *fileTransferGUIDs;
@property (retain, nonatomic) NSArray *participantIdentifiers;
@property (retain, nonatomic) NSString *fromDisplayID;
@property (copy, nonatomic) NSString *replyToGUID;
@property (copy, nonatomic) NSString *threadIdentifierGUID;
@property (copy, nonatomic) NSString *expressiveSendStyleIdentifier;
@property (retain, nonatomic) NSDictionary *messageSummaryInfo;
@property (copy, nonatomic) NSString *encryptionType;
@property (retain, nonatomic) NSDictionary *inlineAttachmentsDictionary;
@property (retain, nonatomic) NSArray *attributionInfoArray;
@property (retain, nonatomic) NSDictionary *nicknameDictionary;
@property (retain, nonatomic) NSString *availabilityVerificationRecipientChannelIDPrefix;
@property (retain, nonatomic) NSString *availabilityVerificationRecipientEncryptionValidationToken;
@property (nonatomic, getter=isExpirable) BOOL expirable;
@property (nonatomic, getter=isAutoReply) BOOL autoReply;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *currentGroupName;
@property (retain, nonatomic) NSNumber *groupParticipantVersion;
@property (retain, nonatomic) NSNumber *groupProtocolVersion;
@property (retain, nonatomic) NSNumber *groupPhotoCreationTime;
@property (nonatomic) BOOL wasDetonated;
@property (retain, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;
@property (nonatomic) BOOL hadChat;

+ (id)_fileTransferMatchingAttribute:(id)a0 inExistingTransfersForMessage:(id)a1;
+ (id)attributionInfoArrayWithBlastDoorMessage:(id)a0;
+ (id)availabilityVerificationRecipientChannelIDPrefixWithBlastDoorMessage:(id)a0;
+ (id)availabilityVerificationRecipientEncryptionValidationTokenWithBlastDoorTextMessage:(id)a0;
+ (id)convertAttributionInfoToArray:(id)a0;
+ (id)convertBlastdoorTypedAttributesToNativeTypesInAttributedString:(id)a0 supportingStickerAttributes:(BOOL)a1 existingFileTransfersForMessage:(id)a2;
+ (id)encryptionTypeWithMessage:(id)a0;
+ (id)fileTransferForBlastDoorFileTransferAttribute:(id)a0 fileTransferGUIDs:(id)a1 supportingStickerAttributes:(BOOL)a2;
+ (BOOL)isAutoReplyWithBlastDoorMessage:(id)a0;
+ (id)messageSummaryInfoDictionaryWithBlastDoorBasicMessage:(id)a0;
+ (id)messageSummaryInfoDictionaryWithBlastDoorMessage:(id)a0;
+ (id)nicknameDictionaryWithBlastDoorMessage:(id)a0;
+ (id)participantDestinationIdentifierWithBasicMessage:(id)a0;
+ (id)participantDestinationIdentifierWithMessage:(id)a0;
+ (id)plainTextBodyWithBlastDoorBasicMessage:(id)a0;
+ (id)plainTextBodyWithBlastDoorMessage:(id)a0;
+ (id)plainTextSubjectWithBlastDoorBasicMessage:(id)a0;
+ (id)plainTextSubjectWithBlastDoorMessage:(id)a0;
+ (id)richBodyWithBlastDoorBasicMessage:(id)a0;
+ (id)richBodyWithBlastDoorMessage:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBDBasic:(id)a0 idsTrustedData:(id)a1;
- (id)_createSuperFormattedStringWithAttributedString:(id)a0;
- (id)initWithBD:(id)a0 idsTrustedData:(id)a1;
- (BOOL)supportsStickerAttributesInMessageBody;

@end
