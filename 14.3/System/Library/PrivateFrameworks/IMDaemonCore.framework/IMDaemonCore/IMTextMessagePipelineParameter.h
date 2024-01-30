@class IMDChat, NSString, NSArray, NSDictionary, NSNumber, NSAttributedString;

@interface IMTextMessagePipelineParameter : NSObject <IMFindChatProcessingParameter, IMTextMessageProcessingParameter, IMMessageLegacyProcessingParameter, IMMessageFromStorageParameter>

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
@property (nonatomic, getter=isExpirable) BOOL expirable;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *currentGroupName;
@property (retain, nonatomic) NSNumber *groupParticipantVersion;
@property (retain, nonatomic) NSNumber *groupProtocolVersion;
@property (retain, nonatomic) NSNumber *groupPhotoCreationTime;
@property (retain, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;

+ (id)convertAttributionInfoToArray:(id)a0;
+ (id)richBodyWithBlastDoorMessage:(id)a0;
+ (id)plainTextBodyWithBlastDoorMessage:(id)a0;
+ (id)plainTextSubjectWithBlastDoorMessage:(id)a0;
+ (id)attributionInfoArrayWithBlastDoorMessage:(id)a0;
+ (id)encryptionTypeWithMessage:(id)a0;
+ (id)participantDestinationIdentifierWithMessage:(id)a0;
+ (id)messageSummaryInfoDictionaryWithBlastDoorMessage:(id)a0;
+ (id)nicknameDictionaryWithBlastDoorMessage:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBD:(id)a0 idsTrustedData:(id)a1;
- (id)convertAttachmentsWithString:(id)a0;
- (id)fileTransferForBlastDoorFileTransferAttribute:(id)a0 fileTransferGUIDs:(id)a1;
- (id)_createSuperFormattedStringWithAttributedString:(id)a0;

@end
