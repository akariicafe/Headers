@class NSString, BlastDoorNicknameInformation, BlastDoorMetadata;

@interface BlastDoorNicknameInformationMessage : NSObject {
    void /* unknown type, empty encoding */ nicknameInformationMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorNicknameInformation *nicknameInformation;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (id)init;
- (void).cxx_destruct;

@end
