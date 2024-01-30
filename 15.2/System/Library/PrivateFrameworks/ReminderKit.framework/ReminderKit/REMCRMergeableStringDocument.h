@class REMReplicaIDSource, NSString, TTMergeableAttributedString, TTMergeableStringVersionedDocument, NSAttributedString;

@interface REMCRMergeableStringDocument : NSObject <REMTTHashtagHosting, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) REMReplicaIDSource *replicaIDSource;
@property (retain, nonatomic) TTMergeableStringVersionedDocument *document;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) TTMergeableAttributedString *mergeableString;

+ (id)documentFromSerializedData:(id)a0 replicaIDSource:(id)a1 forKey:(id)a2 ofObjectID:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithReplicaIDSource:(id)a0 document:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithReplicaIDSource:(id)a0 serializedData:(id)a1 error:(id *)a2;
- (id)serializedData;
- (id)initWithReplicaIDSource:(id)a0 string:(id)a1;
- (id)mutableDocument;
- (id)hashtagAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)enumerateHashtagInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)mergedWithDocument:(id)a0 error:(id *)a1;

@end
