@class NSString, NSData;

@interface BlastDoorNicknameInformation : NSObject {
    void /* unknown type, empty encoding */ nicknameInformation;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *recordKey;
@property (nonatomic, readonly) NSData *decryptionKey;

- (id)init;
- (void).cxx_destruct;

@end
