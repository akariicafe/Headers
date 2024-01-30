@class NSString, NSURL;

@interface BlastDoorFileTransferAttribute_AttachmentInfo : NSObject {
    void /* unknown type, empty encoding */ fileTransferAttribute_AttachmentInfo;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSURL *attachmentURL;
@property (nonatomic, readonly) NSString *signature;
@property (nonatomic, readonly) NSString *ownerID;
@property (nonatomic, readonly) unsigned long long expectedFileSize;
@property (nonatomic, readonly) NSString *encryptionKey;

- (id)init;
- (void).cxx_destruct;

@end
