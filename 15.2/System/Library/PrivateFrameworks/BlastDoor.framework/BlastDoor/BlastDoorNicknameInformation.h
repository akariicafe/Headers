@class NSString, NSData;

@interface BlastDoorNicknameInformation : NSObject {
    void /* unknown type, empty encoding */ nicknameInformation;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *recordKey;
@property (nonatomic, readonly) NSData *decryptionKey;

- (void).cxx_destruct;
- (id)init;

@end
