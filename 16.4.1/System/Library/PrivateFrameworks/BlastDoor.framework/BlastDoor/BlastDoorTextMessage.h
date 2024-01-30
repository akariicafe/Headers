@class NSString, NSUUID, BlastDoorTextMessage_MessageSummaryInfo, BlastDoorMetadata, BlastDoorNicknameInformation, BlastDoorTextMessageMessageTypeWrapper;

@interface BlastDoorTextMessage : NSObject {
    void /* unknown type, empty encoding */ textMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) BlastDoorTextMessageMessageTypeWrapper *messageSubType;
@property (nonatomic, readonly) long long encryptionType;
@property (nonatomic, readonly) NSUUID *replyToGUID;
@property (nonatomic, readonly) NSString *threadIdentifierGUID;
@property (nonatomic, readonly) NSString *expressiveSendStyleIdentifier;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *currentGroupName;
@property (nonatomic, readonly) BOOL has_groupParticipantVersion;
@property (nonatomic, readonly) unsigned long long groupParticipantVersion;
@property (nonatomic, readonly) BOOL has_groupProtocolVersion;
@property (nonatomic, readonly) unsigned long long groupProtocolVersion;
@property (nonatomic, readonly) BOOL has_groupPhotoCreationTime;
@property (nonatomic, readonly) unsigned long long groupPhotoCreationTime;
@property (nonatomic, readonly) BlastDoorTextMessage_MessageSummaryInfo *messageSummaryInfo;
@property (nonatomic, readonly) BOOL isAutoReply;
@property (nonatomic, readonly) NSString *availabilityVerificationRecipientChannelIDPrefix;
@property (nonatomic, readonly) NSString *availabilityVerificationRecipientEncryptionValidationToken;
@property (nonatomic, readonly) BlastDoorNicknameInformation *nicknameInformation;
@property (nonatomic, readonly) NSString *truncatedNicknameRecordKey;

- (id)init;
- (void).cxx_destruct;

@end
