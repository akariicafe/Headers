@class NSArray;

@interface PKVectorMultiTimestamp : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *timestamps;

- (id)serialize;
- (unsigned long long)compareTo:(id)a0;
- (id)initWithData:(id)a0 andCapacity:(unsigned long long)a1;
- (id)initWithArchive:(const struct VectorTimestamp { void /* function */ **x0; struct PtrVector<legacy_drawing::VectorTimestampClock> { struct vector<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> >, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *x0; struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *x1; struct __compressed_pair<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *x0; } x2; } x0; } x1; } *)a0 andCapacity:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)saveToArchive:(struct VectorTimestamp { void /* function */ **x0; struct PtrVector<legacy_drawing::VectorTimestampClock> { struct vector<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> >, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *x0; struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *x1; struct __compressed_pair<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *x0; } x2; } x0; } x1; } *)a0;
- (void)mergeWithTimestamp:(id)a0;
- (id)sortedUUIDs;
- (id)initWithTimestamps:(id)a0;
- (id)clockElementForUUID:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)clockForUUID:(id)a0 atIndex:(unsigned long long)a1;
- (void)setClock:(unsigned long long)a0 forUUID:(id)a1 atIndex:(unsigned long long)a2;
- (void)setClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2 atIndex:(unsigned long long)a3;

@end
