@class NSString, SAInstruction, SABinaryLoadInfo;

@interface SAFrame : NSObject <SAJSONSerialization, SASerializable> {
    unsigned long long _address;
    SABinaryLoadInfo *_binaryLoadInfo;
    SAFrame *_parentFrame;
    id _childFrameOrFrames;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL symbolicationOffByOne;
@property (readonly) unsigned long long address;
@property (readonly) SAInstruction *instruction;
@property (readonly) BOOL isKernel;
@property (readonly) BOOL isRootFrame;
@property (readonly) BOOL isTruncatedBacktraceFrame;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned long long x5; union { unsigned char x0; struct { unsigned char x0 : 1; } x1; } x6; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFrame:(id)a0 andParent:(id)a1;

@end
