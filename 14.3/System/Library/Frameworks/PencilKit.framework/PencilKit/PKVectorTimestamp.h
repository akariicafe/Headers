@class NSString, NSMutableDictionary;

@interface PKVectorTimestamp : NSObject <NSCopying, CHStrokeProviderVersion> {
    NSMutableDictionary *_clock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serialize;
- (BOOL)isEmpty;
- (id)init;
- (unsigned long long)compareTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)initWithArchive:(const struct VectorTimestamp { void /* function */ **x0; struct PtrVector<legacy_drawing::VectorTimestampClock> { struct vector<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> >, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *x0; struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *x1; struct __compressed_pair<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *x0; } x2; } x0; } x1; } *)a0;
- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (id)allUUIDs;
- (BOOL)isEqual:(id)a0;
- (id)clockElementForUUID:(id)a0;
- (void)saveToArchive:(struct VectorTimestamp { void /* function */ **x0; struct PtrVector<legacy_drawing::VectorTimestampClock> { struct vector<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> >, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *x0; struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *x1; struct __compressed_pair<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > > > { struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock> > *x0; } x2; } x0; } x1; } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setClock:(unsigned long long)a0 forUUID:(id)a1;
- (unsigned long long)clockForUUID:(id)a0;
- (void)mergeWithTimestamp:(id)a0;
- (void)setClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)a0;
- (void)incrementClockForUUID:(id)a0;
- (long long)compareClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;
- (void)unionClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;

@end
