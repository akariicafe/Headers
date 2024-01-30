@class NSString, NSMutableArray;

@interface SADispatchQueue : NSObject <SASerializable> {
    BOOL _isConcurrent;
    NSString *_dispatchQueueLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long dispatchQueueId;
@property (readonly) NSString *dispatchQueueLabel;
@property (readonly) BOOL isConcurrent;
@property (readonly) NSMutableArray *dispatchQueueStates;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned int x3; union { unsigned short x0; struct { unsigned char x0 : 1; } x1; } x4; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (id)initWithId:(unsigned long long)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void).cxx_destruct;

@end
