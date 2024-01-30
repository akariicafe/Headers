@class NSString;

@interface SATimestamp : NSObject <SAJSONSerialization, SASerializable, NSCopying> {
    unsigned long long _machAbsTime;
    double _machAbsTimeSeconds;
    unsigned long long _machContTime;
    double _machContTimeSeconds;
    double _wallTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long machAbsTime;
@property (readonly) double machAbsTimeSeconds;
@property (readonly) unsigned long long machContTime;
@property (readonly) double machContTimeSeconds;
@property (readonly) double wallTime;

+ (id)timestampWithMachAbsTime:(unsigned long long)a0 machAbsTimeSec:(double)a1 machContTime:(unsigned long long)a2 machContTimeSec:(double)a3 wallTime:(double)a4;
+ (id)classDictionaryKey;
+ (id)timestampWithMachAbsTime:(unsigned long long)a0 machContTime:(unsigned long long)a1 wallTime:(double)a2 machTimebase:(struct mach_timebase_info { unsigned int x0; unsigned int x1; })a3;
+ (id)timestamp;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)guessMissingTimesBasedOnCurrentTime;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; double x4; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (BOOL)le:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)ne:(id)a0;
- (BOOL)isEqualToTimestamp:(id)a0;
- (id)initWithMachAbsTime:(unsigned long long)a0 machAbsTimeSec:(double)a1 machContTime:(unsigned long long)a2 machContTimeSec:(double)a3 wallTime:(double)a4;
- (BOOL)eq:(id)a0;
- (void)guessMissingTimesBasedOnTimestamp:(id)a0;
- (long long)compare:(id)a0;
- (BOOL)gt:(id)a0;
- (BOOL)ge:(id)a0;
- (BOOL)lt:(id)a0;

@end
