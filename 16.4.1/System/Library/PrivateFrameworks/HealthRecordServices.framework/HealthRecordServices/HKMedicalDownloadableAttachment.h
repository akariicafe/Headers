@class NSData, NSUUID, NSString, NSURL, NSDate, NSError, NSLocale, NSDictionary, HKFHIRVersion, NSNumber;

@interface HKMedicalDownloadableAttachment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSUUID *medicalRecordIdentifier;
@property (readonly, copy, nonatomic) NSUUID *clinicalRecordIdentifier;
@property (readonly, copy, nonatomic) NSUUID *accountIdentifier;
@property (readonly, copy, nonatomic) HKFHIRVersion *FHIRVersion;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long errorStatus;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *webURL;
@property (readonly, copy, nonatomic) NSNumber *sizeInBytes;
@property (readonly, copy, nonatomic) NSString *contentType;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSData *expectedHash;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) long long retryCount;
@property (readonly, copy, nonatomic) NSDate *nextRetryDate;
@property (readonly, copy, nonatomic) NSDate *lastUpdatedDate;
@property (readonly, copy, nonatomic) NSError *lastError;
@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSData *inlineData;
@property (readonly, copy, nonatomic) NSData *inlineDataChecksum;
@property (readonly, copy, nonatomic) NSUUID *attachmentIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)copyForAccountWithIdentifier:(id)a0 medicalRecordIdentifier:(id)a1 clinicalRecordIdentifier:(id)a2;
- (id)initWithIdentifier:(id)a0 medicalRecordIdentifier:(id)a1 clinicalRecordIdentifier:(id)a2 accountIdentifier:(id)a3 FHIRVersion:(id)a4 type:(long long)a5 status:(long long)a6 errorStatus:(long long)a7 title:(id)a8 webURL:(id)a9 sizeInBytes:(id)a10 contentType:(id)a11 locale:(id)a12 expectedHash:(id)a13 creationDate:(id)a14 retryCount:(long long)a15 nextRetryDate:(id)a16 lastUpdatedDate:(id)a17 lastError:(id)a18 fileURL:(id)a19 inlineData:(id)a20 inlineDataChecksum:(id)a21 attachmentIdentifier:(id)a22 metadata:(id)a23;

@end
