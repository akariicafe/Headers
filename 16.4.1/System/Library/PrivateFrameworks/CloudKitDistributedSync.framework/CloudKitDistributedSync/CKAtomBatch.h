@class CKXBackingStore, CKMergeableValueID, CKMergeableDeltaMetadata, CKDSReadableStorage, CKDistributedTimestampStateVector;

@interface CKAtomBatch : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKXBackingStore *backingStore;
@property (readonly, nonatomic) CKDSReadableStorage *storage;
@property (readonly, nonatomic) struct { unsigned char x0; unsigned char x1; } writerIdentity;
@property (readonly, nonatomic) BOOL isWriting;
@property (readonly, nonatomic) CKDistributedTimestampStateVector *enumeratedContentsVector;
@property (readonly, nonatomic) unsigned char formatVersion;
@property (readonly, nonatomic) BOOL fileBacked;
@property (readonly, nonatomic) CKMergeableValueID *mergeableValueID;
@property (readonly, nonatomic) CKMergeableDeltaMetadata *metadata;
@property (readonly, nonatomic) long long count;
@property (copy, nonatomic) id /* block */ atomValueDescriptionBlock;

+ (id)atomBatchByMergingAtomBatches:(id)a0 error:(id *)a1;
+ (id)bindingForFormatVersion:(unsigned char)a0;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)finishWriting;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)validateWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)contentsDescription;
- (id)dataWithError:(id *)a0;
- (id)initWithData:(id)a0 mergeableValueID:(id)a1 metadata:(id)a2 error:(id *)a3;
- (id)initWithFileURL:(id)a0 mergeableValueID:(id)a1 metadata:(id)a2 options:(id)a3 error:(id *)a4;
- (BOOL)splitWithMaximumSize:(unsigned long long)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)finishWritingWithError:(id *)a0;
- (BOOL)_setStorage:(id)a0 optionsByReaderWriterClass:(id)a1 error:(id *)a2;
- (void)appendAtomWithBlock:(id /* block */)a0;
- (id)contentsDescriptionWithStringSiteIdentifiers;
- (id)contentsDescriptionWithStringSiteIdentifiers:(BOOL)a0;
- (void)enumerateAtomsWithOptions:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithData:(id)a0 mergeableValueID:(id)a1 metadata:(id)a2 options:(id)a3 error:(id *)a4;
- (id)initWithStorage:(id)a0 optionsByReaderWriterClass:(id)a1 mergeableValueID:(id)a2 metadata:(id)a3 formatVersion:(unsigned char)a4 error:(id *)a5;
- (id)initWriterWithMergeableValueID:(id)a0 metadata:(id)a1 formatVersion:(unsigned char)a2 error:(id *)a3;
- (id)initWriterWithMergeableValueID:(id)a0 metadata:(id)a1 options:(id)a2 error:(id *)a3;
- (id)initWriterWithMergeableValueID:(id)a0 metadata:(id)a1 version:(unsigned char)a2;
- (BOOL)size:(unsigned long long *)a0 error:(id *)a1;
- (id)splitWithMaximumSize:(unsigned long long)a0 atomic:(BOOL)a1 error:(id *)a2;
- (id)splitWithMaximumSize:(unsigned long long)a0 error:(id *)a1;
- (id)writableCopy;
- (id)writableCopyWithMergeableValueID:(id)a0 metadata:(id)a1;
- (id)writerOptions;

@end
