@class NSString, C2RequestOptions, NSData, NSURL, NSDate;

@interface CKStreamingAsset : NSObject <CKRecordValue, CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) C2RequestOptions *immutableRequestOptions;
@property (copy) NSData *fileSignature;
@property (copy) NSData *referenceSignature;
@property (copy) NSString *owner;
@property long long expectedSizeBytes;
@property (copy) NSURL *uploadURL;
@property (copy) NSDate *uploadURLExpirationDate;
@property long long reservedSize;
@property (copy) C2RequestOptions *requestOptions;
@property (copy) NSURL *downloadURL;
@property (copy) NSDate *downloadURLExpirationDate;
@property long long size;
@property BOOL hasSize;
@property (copy) NSString *uploadReceipt;
@property (readonly) long long bytesUploaded;
@property (readonly) long long bytesUpperBound;
@property (readonly, copy) NSURL *contentDownloadURL;
@property (readonly, copy) NSDate *contentDownloadURLExpirationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)init;
- (id)redactedDescription;
- (id)initInternal;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyServerFieldsFromStreamingAsset:(id)a0;
- (id)initWithExpectedSizeBytes:(long long)a0;

@end
