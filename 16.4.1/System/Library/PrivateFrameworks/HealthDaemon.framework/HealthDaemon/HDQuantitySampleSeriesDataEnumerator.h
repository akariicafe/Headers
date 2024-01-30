@class NSError, HDDatabaseTransaction;

@interface HDQuantitySampleSeriesDataEnumerator : NSObject {
    HDDatabaseTransaction *_transaction;
    unsigned long long _bufferSize;
    struct deque<std::tuple<double, double, float>, std::allocator<std::tuple<double, double, float>>> { struct __split_buffer<std::tuple<double, double, float> *, std::allocator<std::tuple<double, double, float> *>> { void **__first_; void **__begin_; void **__end_; struct __compressed_pair<std::tuple<double, double, float> **, std::allocator<std::tuple<double, double, float> *>> { void **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<std::tuple<double, double, float>>> { unsigned long long __value_; } __size_; } _data;
    BOOL _hasFetchedData;
    BOOL _hasFetchedAllData;
    BOOL _hasDeterminedSeriesVersion;
    BOOL _isVersion1;
    BOOL _hasDuration;
    long long _index;
    double _previousEndTime;
    NSError *_fatalError;
    unsigned char _UUIDBytes[16];
    double _lastFetchedDatumTime;
    double _lastDatumTime;
    struct ObjectIdentifier { long long objectType; unsigned long long identifier; } _objectIdentifier;
}

@property (readonly, nonatomic) BOOL done;
@property (readonly, nonatomic) long long persistentID;
@property (readonly, nonatomic) long long dataTypeCode;
@property (readonly, nonatomic) unsigned char[16] *UUIDBytesPtr;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) long long sourceID;
@property (readonly, nonatomic) long long HFDKey;

- (id).cxx_construct;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_unitTesting_addToBufferTimestamp:(double)a0 value:(double)a1 duration:(float)a2 isLastDatum:(BOOL)a3;
- (BOOL)enumerateDataToTime:(double)a0 error:(id *)a1 handler:(id /* block */)a2;
- (id)initWithTransaction:(id)a0 persistentID:(long long)a1 dataTypeCode:(long long)a2 UUIDBytes:(unsigned char[16])a3 startTime:(double)a4 endTime:(double)a5 count:(long long)a6 sourceID:(long long)a7 HFDKey:(long long)a8 bufferSize:(unsigned long long)a9;
- (double)nextDatumTime;
- (BOOL)primeEnumeratorWithError:(id *)a0;

@end
