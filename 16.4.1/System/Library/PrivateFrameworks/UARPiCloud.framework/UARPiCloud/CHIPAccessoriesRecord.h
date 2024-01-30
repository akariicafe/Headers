@class NSString, UARPAccessoryMetadata, CKRecord, NSObject;
@protocol OS_os_log;

@interface CHIPAccessoriesRecord : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKRecord *ckRecord;
@property (readonly) NSString *accessoryListSignature;
@property (readonly) NSString *stonehengeCertificateID;
@property (readonly) NSString *installationGuideURLString;
@property (readonly) UARPAccessoryMetadata *accessoryMetadata;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0;
- (BOOL)createAccessoryMetadata;

@end
