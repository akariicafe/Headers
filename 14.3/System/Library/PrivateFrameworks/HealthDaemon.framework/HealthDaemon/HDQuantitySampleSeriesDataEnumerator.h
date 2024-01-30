@class NSError, HDDatabaseTransaction;

@interface HDQuantitySampleSeriesDataEnumerator : NSObject {
    HDDatabaseTransaction *_transaction;
    unsigned long long _bufferSize;
    struct deque<std::__1::tuple<double, double, float>, std::__1::allocator<std::__1::tuple<double, double, float> > > { struct __split_buffer<std::__1::tuple<double, double, float> *, std::__1::allocator<std::__1::tuple<double, double, float> *> > { struct tuple<double, double, float> **__first_; struct tuple<double, double, float> **__begin_; struct tuple<double, double, float> **__end_; struct __compressed_pair<std::__1::tuple<double, double, float> **, std::__1::allocator<std::__1::tuple<double, double, float> *> > { struct tuple<double, double, float> **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::tuple<double, double, float> > > { unsigned long long __value_; } __size_; } _data;
    BOOL _hasDeterminedSeriesVersion;
    BOOL _isVersion1;
    BOOL _hasDuration;
    long long _index;
    double _previousEndTime;
    NSError *_fatalError;
    unsigned char _UUIDBytes[16];
}

@property (nonatomic) struct ObjectIdentifier { long long objectType; unsigned long long identifier; } objectIdentifier;
@property (nonatomic) BOOL hasFetchedData;
@property (nonatomic) double lastFetchedDatumTime;
@property (nonatomic) double lastDatumTime;
@property (nonatomic) BOOL hasFetchedAllData;
@property (readonly, nonatomic) BOOL done;
@property (readonly, nonatomic) long long persistentID;
@property (readonly, nonatomic) long long dataTypeCode;
@property (readonly, nonatomic) unsigned char[16] *UUIDBytesPtr;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) long long sourceID;
@property (readonly, nonatomic) long long HFDKey;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)description;
- (id).cxx_construct;
- (id)initWithTransaction:(id)a0 persistentID:(long long)a1 dataTypeCode:(long long)a2 UUIDBytes:(unsigned char[16])a3 startTime:(double)a4 endTime:(double)a5 count:(long long)a6 sourceID:(long long)a7 HFDKey:(long long)a8 bufferSize:(unsigned long long)a9;
- (BOOL)primeEnumeratorWithError:(id *)a0;
- (double)nextDatumTime;
- (BOOL)enumerateDataToTime:(double)a0 error:(id *)a1 handler:(id /* block */)a2;
- (BOOL)_fillValueBufferWithError:(id *)a0;
- (BOOL)_addToBufferTimestamp:(double)a0 value:(double)a1 duration:(float)a2;
- (void)_unitTesting_addToBufferTimestamp:(double)a0 value:(double)a1 duration:(float)a2 isLastDatum:(BOOL)a3;

@end
