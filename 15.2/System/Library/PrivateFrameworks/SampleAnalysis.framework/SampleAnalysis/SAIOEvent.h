@class NSString, SATimestamp;

@interface SAIOEvent : NSObject <SASerializable> {
    unsigned int _tier;
    unsigned int _rawType;
    SATimestamp *_startTimestamp;
    SATimestamp *_endTimestamp;
    unsigned long long _size;
    unsigned long long _blockPointer;
    unsigned long long _blockNumber;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) SATimestamp *startTimestamp;
@property (readonly) SATimestamp *endTimestamp;
@property (readonly) unsigned long long size;
@property (readonly) NSString *type;
@property (readonly) unsigned int tier;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)typeString:(unsigned int)a0;

- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void).cxx_destruct;

@end
