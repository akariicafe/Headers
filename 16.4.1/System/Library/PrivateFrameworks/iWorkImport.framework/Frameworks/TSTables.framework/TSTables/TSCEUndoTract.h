@interface TSCEUndoTract : NSObject <NSCopying>

@property (nonatomic) BOOL isRangeRef;
@property (nonatomic) BOOL preserveRectangularRange;
@property (nonatomic) unsigned char purpose;
@property (readonly, nonatomic) BOOL spansAllColumns;
@property (readonly, nonatomic) BOOL spansAllRows;
@property (readonly) struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } columnUids;
@property (readonly) struct TSKUIDStructVectorTemplate<TSKUIDStruct> { struct TSKUIDStruct *__begin_; struct TSKUIDStruct *__end_; struct __compressed_pair<TSKUIDStruct *, std::allocator<TSKUIDStruct>> { struct TSKUIDStruct *__value_; } __end_cap_; } rowUids;

+ (BOOL)p_remapUidVector:(void *)a0 usingUidMap:(const void *)a1 clearIfMissing:(BOOL)a2;
+ (void)saveToArchive:(void *)a0 columnUids:(const void *)a1 rowUids:(const void *)a2 purpose:(unsigned char)a3 isRangeRef:(BOOL)a4 preserveRectangularRange:(BOOL)a5;
+ (void)saveToArchive:(void *)a0 tsuColumnUids:(const void *)a1 tsuRowUids:(const void *)a2 purpose:(unsigned char)a3 isRangeRef:(BOOL)a4 preserveRectangularRange:(BOOL)a5;
+ (id)stringForPurpose:(unsigned char)a0;

- (id)initWithPurpose:(unsigned char)a0;
- (id).cxx_construct;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)saveToArchive:(void *)a0;
- (id)initWithColumnUids:(const void *)a0 rowUids:(const void *)a1 purpose:(unsigned char)a2;
- (void)appendColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 rowUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithColumnUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a0 rowUid:(struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; })a1 purpose:(unsigned char)a2;
- (BOOL)remapUsingColumnUidMap:(const void *)a0 rowUidMap:(const void *)a1 clearIfMissing:(BOOL)a2;
- (BOOL)remapUsingUidMap:(const void *)a0;

@end
