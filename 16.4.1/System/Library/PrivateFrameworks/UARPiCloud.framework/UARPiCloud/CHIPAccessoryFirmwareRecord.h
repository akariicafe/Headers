@class NSObject, NSString, CKRecord, NSNumber;
@protocol OS_os_log;

@interface CHIPAccessoryFirmwareRecord : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_os_log> *_log;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *recordName;
@property (readonly) CKRecord *ckRecord;
@property (readonly) NSString *signature;
@property (readonly) NSString *verificationCertificateID;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSNumber *firmwareVersionNumber;
@property (readonly) NSNumber *minFirmwareVersionNumber;
@property (readonly) NSNumber *maxFirmwareVersionNumber;
@property (readonly) NSString *firmwareURL;
@property (readonly) NSString *firmwareBinaryHash;
@property (readonly) NSString *firmwareFileSize;
@property (readonly) NSString *releaseNotesURL;
@property (readonly) NSString *releaseNotesHash;
@property (readonly) NSNumber *hashAlgorithmType;
@property (readonly) NSNumber *cdVersionNumber;
@property (readonly) NSString *recordStatus;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0;

@end
