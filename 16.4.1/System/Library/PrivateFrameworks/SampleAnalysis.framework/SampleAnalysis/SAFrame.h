@class NSString, SAInstruction, SABinaryLoadInfo;

@interface SAFrame : NSObject <SAJSONSerialization, SASerializable> {
    union { unsigned char bits; struct { unsigned char isSymbolicationOffByOne : 1; unsigned char isSwiftAsync : 1; unsigned char isKernel : 1; unsigned char isTruncatedBacktraceFrame : 1; unsigned char isLeafyCallstackIsInAnotherCallTreeFrame : 1; } ; } _bools;
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
@property (readonly) unsigned long long address;
@property (readonly) SAInstruction *instruction;
@property (readonly) BOOL isSymbolicationOffByOne;
@property (readonly) BOOL isSwiftAsync;
@property (readonly) BOOL isKernel;
@property (readonly) BOOL isRootFrame;
@property (readonly) BOOL isFakeFrame;
@property (readonly) BOOL isTruncatedBacktraceFrame;
@property (readonly) BOOL isLeafyCallstackIsInAnotherCallTreeFrame;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (void)printFrameTree:(id)a0;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned long long x5; union { unsigned char x0; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x1; } x6; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initCopyingFrame:(id)a0 withParent:(id)a1;

@end
