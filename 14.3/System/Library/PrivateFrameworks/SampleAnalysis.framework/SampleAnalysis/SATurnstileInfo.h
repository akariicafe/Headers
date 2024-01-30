@class NSString;

@interface SATurnstileInfo : NSObject <SASerializable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long context;
@property (readonly) unsigned char priority;
@property (readonly) unsigned char numHops;
@property (readonly) unsigned long long flags;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned char x3; unsigned char x4; unsigned long long x5; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (id)initWithKCDataTurnstileInfo:(const struct stackshot_thread_turnstileinfo { unsigned long long x0; unsigned long long x1; unsigned char x2; unsigned char x3; unsigned long long x4; } *)a0;
- (id)descriptionForPid:(int)a0 tid:(unsigned long long)a1 threadPriority:(int)a2 options:(unsigned long long)a3 nameCallback:(id /* block */)a4;

@end
