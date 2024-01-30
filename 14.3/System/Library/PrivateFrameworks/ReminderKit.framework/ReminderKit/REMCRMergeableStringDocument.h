@class REMReplicaIDSource, NSString, TTMergeableStringVersionedDocument, NSAttributedString;

@interface REMCRMergeableStringDocument : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource;
@property (retain, nonatomic) TTMergeableStringVersionedDocument *document;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSAttributedString *attributedString;

+ (id)documentFromSerializedData:(id)a0 replicaIDSource:(id)a1 forKey:(id)a2 ofObjectID:(id)a3;

- (id)initWithReplicaIDSource:(id)a0 serializedData:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithReplicaIDSource:(id)a0 document:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReplicaIDSource:(id)a0 string:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)mutableDocument;
- (BOOL)isEqual:(id)a0;
- (id)mergedWithDocument:(id)a0 error:(id *)a1;
- (id)serializedData;
- (void)encodeWithCoder:(id)a0;

@end
