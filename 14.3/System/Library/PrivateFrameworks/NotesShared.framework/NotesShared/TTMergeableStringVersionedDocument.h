@class TTMergeableAttributedString;

@interface TTMergeableStringVersionedDocument : TTVersionedDocument

@property (retain, nonatomic) TTMergeableAttributedString *mergeableString;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (id)initWithArchive:(const struct Document { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<versioned_document::Version> { void **x0; int x1; int x2; int x3; } x4; unsigned int x5; } *)a0 andReplicaID:(id)a1;
- (void)mergeVersion:(unsigned int)a0 fromData:(id)a1;
- (id)serializeCurrentVersion:(unsigned int *)a0;
- (void).cxx_destruct;
- (id)initWithMergeableString:(id)a0;
- (id)initWithData:(id)a0 andReplicaID:(id)a1;
- (unsigned long long)mergeWithStringVersionedDocument:(id)a0;

@end
