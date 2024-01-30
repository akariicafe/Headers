@class NSUUID, NSDate;

@interface PKStrokePath : NSObject <NSCopying> {
    struct PKStrokePathPointsPrivate { struct shared_ptr<PKStrokePathPointsShared> { struct PKStrokePathPointsShared *__ptr_; struct __shared_weak_count *__cntrl_; } constants; struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *__value_; } __end_cap_; } pointsData; } _strokeDataPointsPrivate;
    struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields *__ptr_; struct __shared_weak_count *__cntrl_; } _unknownFields;
    BOOL _didValidateTimestamps;
    BOOL _hasValidTimestampData;
}

@property (readonly, nonatomic) unsigned long long _pointsCount;
@property (readonly, nonatomic) unsigned long long _startIndex;
@property (readonly, nonatomic) unsigned long long _immutablePointsCount;
@property (readonly, nonatomic) long long _inputType;
@property (readonly, nonatomic) double _timestamp;
@property (readonly, nonatomic) NSUUID *_strokeDataUUID;
@property (readonly, nonatomic) BOOL hasValidPointTimestampData;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSDate *creationDate;

+ (id)strokeDataFromDataArchive:(const struct StrokeData { void /* function */ **x0; unsigned long long x1; unsigned long long x2; struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data> > { struct __compressed_pair<PB::Data *, std::__1::default_delete<PB::Data> > { struct Data *x0; } x0; } x3; unsigned long long x4; struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data> > { struct __compressed_pair<PB::Data *, std::__1::default_delete<PB::Data> > { struct Data *x0; } x0; } x5; unsigned long long x6; unsigned long long x7; struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data> > { struct __compressed_pair<PB::Data *, std::__1::default_delete<PB::Data> > { struct Data *x0; } x0; } x8; double x9; BOOL x10; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x11; struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields *x0; struct __shared_weak_count *x1; } x12; } *)a0;
+ (void)calculateOffsets;
+ (void)_calculateOffsets:(unsigned long long *)a0 sizes:(unsigned long long *)a1;

- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })locationAtIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)pointAtIndex:(unsigned long long)a0;
- (double)timestampAtIndex:(unsigned long long)a0;
- (id).cxx_construct;
- (double)radiusAtIndex:(unsigned long long)a0;
- (id)deltaTo:(id)a0;
- (BOOL)inflight;
- (double)interpolatedTimeoffsetAt:(double)a0;
- (BOOL)saveToDataArchive:(struct StrokeData { void /* function */ **x0; unsigned long long x1; unsigned long long x2; struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data> > { struct __compressed_pair<PB::Data *, std::__1::default_delete<PB::Data> > { struct Data *x0; } x0; } x3; unsigned long long x4; struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data> > { struct __compressed_pair<PB::Data *, std::__1::default_delete<PB::Data> > { struct Data *x0; } x0; } x5; unsigned long long x6; unsigned long long x7; struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data> > { struct __compressed_pair<PB::Data *, std::__1::default_delete<PB::Data> > { struct Data *x0; } x0; } x8; double x9; BOOL x10; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x11; struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields *x0; struct __shared_weak_count *x1; } x12; } *)a0;
- (id)dataApplying:(id)a0;
- (id)initWithPoints:(struct PKCompressedStrokePoint { struct _PKPoint { float x0; float x1; } x0; float x1; float x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; } *)a0 count:(unsigned long long)a1 immutableCount:(unsigned long long)a2 inputType:(long long)a3 timestamp:(double)a4 UUID:(id)a5;
- (void)setPoints:(struct PKCompressedStrokePoint { struct _PKPoint { float x0; float x1; } x0; float x1; float x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; } *)a0 pointsCount:(unsigned long long)a1 timestamp:(double)a2;
- (void)setPointsFrom:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct CGPoint { double x0; double x1; })locationOnSegment:(unsigned long long)a0 t:(double)a1;
- (id)interpolatedPointAt:(double)a0;
- (double)parametricValue:(double)a0 offsetByDistance:(double)a1;
- (void)_enumerateInterpolatedPointsInRange:(id)a0 incrementBlock:(id /* block */)a1 usingBlock:(id /* block */)a2;
- (double)parametricValue:(double)a0 offsetByTime:(double)a1;
- (id)initWithControlPoints:(id)a0 creationDate:(id)a1;
- (id)initWithData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 UUID:(id)a2;
- (void)setLocation:(struct CGPoint { double x0; double x1; })a0 atIndex:(unsigned long long)a1;
- (const struct CGPath { } *)_newPathRepresentation;
- (struct PKCompressedStrokePoint { struct _PKPoint { float x0; float x1; } x0; float x1; float x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; })_compressedPointAt:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })interpolatedLocationAt:(double)a0;
- (struct _PKStrokePoint { double x0; struct CGPoint { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })decompressedPointAt:(unsigned long long)a0;
- (void)enumerateInterpolatedPointsInRange:(id)a0 strideByDistance:(double)a1 usingBlock:(id /* block */)a2;
- (void)enumerateInterpolatedPointsInRange:(id)a0 strideByTime:(double)a1 usingBlock:(id /* block */)a2;
- (void)enumerateInterpolatedPointsInRange:(id)a0 strideByParametricStep:(double)a1 usingBlock:(id /* block */)a2;
- (void)readStrokeDataFromArchive:(const struct StrokeData { void /* function */ **x0; unsigned long long x1; unsigned long long x2; struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data> > { struct __compressed_pair<PB::Data *, std::__1::default_delete<PB::Data> > { struct Data *x0; } x0; } x3; unsigned long long x4; struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data> > { struct __compressed_pair<PB::Data *, std::__1::default_delete<PB::Data> > { struct Data *x0; } x0; } x5; unsigned long long x6; unsigned long long x7; struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data> > { struct __compressed_pair<PB::Data *, std::__1::default_delete<PB::Data> > { struct Data *x0; } x0; } x8; double x9; BOOL x10; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; } x11; struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields *x0; struct __shared_weak_count *x1; } x12; } *)a0;

@end
