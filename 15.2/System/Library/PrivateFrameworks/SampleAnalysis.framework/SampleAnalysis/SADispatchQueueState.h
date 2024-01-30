@class NSString, SAThread, SAThreadState;

@interface SADispatchQueueState : NSObject <SASerializable> {
    unsigned long long _threadStateIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) SAThread *thread;
@property (readonly) unsigned long long threadStateIndex;
@property (readonly) SAThreadState *threadState;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned int x3; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void).cxx_destruct;
- (id)initWithThread:(id)a0 threadStateIndex:(unsigned long long)a1;

@end
