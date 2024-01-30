@class NSString, NSData, NSURL, NSDate, C2RequestOptions;

@interface CKStreamingAsset : NSObject <CKRecordValue, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSData *fileSignature;
@property (copy, nonatomic) NSData *referenceSignature;
@property (copy, nonatomic) NSString *owner;
@property (nonatomic) unsigned long long expectedSizeBytes;
@property (copy, nonatomic) NSURL *uploadURL;
@property (copy, nonatomic) NSDate *uploadURLExpirationDate;
@property (nonatomic) unsigned long long reservedSize;
@property (copy, nonatomic) C2RequestOptions *requestOptions;
@property (copy, nonatomic) NSURL *downloadURL;
@property (copy, nonatomic) NSDate *downloadURLExpirationDate;
@property (nonatomic) unsigned long long size;
@property (nonatomic) BOOL hasSize;
@property (copy, nonatomic) NSString *uploadReceipt;
@property (readonly, nonatomic) unsigned long long bytesUploaded;
@property (readonly, nonatomic) unsigned long long bytesUpperBound;
@property (readonly, copy, nonatomic) NSURL *contentDownloadURL;
@property (readonly, copy, nonatomic) NSDate *contentDownloadURLExpirationDate;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (void)copyServerFieldsFromStreamingAsset:(id)a0;
- (void).cxx_destruct;
- (id)initWithExpectedSizeBytes:(unsigned long long)a0;
- (id)init;
- (id)_initBare;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
