@class NSString, BlastDoorBasicTextMessageMessageTypeWrapper, BlastDoorMetadata;

@interface BlastDoorBasicTextMessage : NSObject {
    void /* unknown type, empty encoding */ basicTextMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) BlastDoorBasicTextMessageMessageTypeWrapper *messageSubType;
@property (nonatomic, readonly) long long encryptionType;
@property (nonatomic, readonly) NSString *threadIdentifierGUID;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *currentGroupName;
@property (nonatomic, readonly) BOOL has_groupParticipantVersion;
@property (nonatomic, readonly) unsigned long long groupParticipantVersion;
@property (nonatomic, readonly) BOOL has_groupProtocolVersion;
@property (nonatomic, readonly) unsigned long long groupProtocolVersion;

- (id)init;
- (void).cxx_destruct;

@end
