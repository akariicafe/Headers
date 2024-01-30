@class NSString;

@interface SAWaitInfo : NSObject <SASerializable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned short type;
@property (readonly) unsigned long long owner;
@property (readonly) unsigned long long context;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (long long)compare:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned short x2; unsigned long long x3; unsigned long long x4; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (BOOL)isEqual:(id)a0;
- (id)initWithKCDataWaitInfo:(const struct stackshot_thread_waitinfo { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned char x3; } *)a0;
- (id)descriptionForPid:(int)a0 tid:(unsigned long long)a1 options:(unsigned long long)a2 nameCallback:(id /* block */)a3;

@end
