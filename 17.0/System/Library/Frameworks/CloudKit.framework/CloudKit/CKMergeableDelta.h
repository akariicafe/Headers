@class CKAsset, NSString, CKMergeableValueID, NSURL, CKMergeableDeltaMetadata, NSData, CKMergeableDeltaID;

@interface CKMergeableDelta : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSURL *fileURL;
@property (copy) CKMergeableValueID *valueID;
@property (retain) CKMergeableDeltaMetadata *metadata;
@property (readonly, copy, nonatomic) CKMergeableDeltaID *deltaID;
@property (copy) NSData *_data;
@property (retain) CKAsset *asset;
@property long long encryptMetadataTernary;
@property (copy) NSData *encryptedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)maxInlineDeltaSize;
+ (long long)suggestedDeltaSizeForContainer:(id)a0;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)init;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithValueID:(id)a0 metadata:(id)a1 asset:(id)a2;
- (void)unpopulateAsset;
- (BOOL)contentSize:(unsigned long long *)a0 error:(id *)a1;
- (id)dataBackedDeltaWithError:(id *)a0;
- (id)dataWithError:(id *)a0;
- (id)initWithData:(id)a0 metadata:(id)a1;
- (id)initWithFileURL:(id)a0 metadata:(id)a1;
- (id)initWithValueID:(id)a0 metadata:(id)a1;
- (id)initWithValueID:(id)a0 metadata:(id)a1 data:(id)a2;
- (id)initWithValueID:(id)a0 metadata:(id)a1 encryptedData:(id)a2;
- (id)initWithValueID:(id)a0 metadata:(id)a1 fileURL:(id)a2;
- (void)populateAssetIfNecessaryWithMaxInlineSize:(unsigned long long)a0;
- (BOOL)protobufSize:(unsigned long long *)a0 error:(id *)a1;

@end
