@class NSString, SATimestamp;

@interface SATimeRange : NSObject <SAJSONSerialization, SASerializable, NSCopying> {
    SATimestamp *_startTime;
    SATimestamp *_endTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) SATimestamp *startTime;
@property (readonly) SATimestamp *endTime;
@property (readonly) unsigned long long deltaMachAbsTime;
@property (readonly) double deltaMachAbsTimeSeconds;
@property (readonly) unsigned long long deltaMachContTime;
@property (readonly) double deltaMachContTimeSeconds;
@property (readonly) double deltaWallTime;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)timeRangeStart:(id)a0 end:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithStart:(id)a0 end:(id)a1;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;

@end
