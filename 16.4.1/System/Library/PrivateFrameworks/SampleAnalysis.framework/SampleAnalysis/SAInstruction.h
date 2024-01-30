@class NSString, SABinary, SASegment, SASymbol, SASourceInfo;

@interface SAInstruction : NSObject <SASerializable> {
    id _symbolOrSymbols;
    id _sourceInfoOrSourceInfos;
    SABinary *_binary;
    SASegment *_segment;
    unsigned long long _offsetIntoSegment;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) SABinary *binary;
@property (readonly, weak) SASegment *segment;
@property (readonly) long long offsetIntoBinary;
@property (readonly) unsigned long long offsetIntoSegment;
@property (readonly) SASymbol *symbol;
@property (readonly) SASourceInfo *sourceInfo;
@property (readonly) unsigned long long offsetIntoTextSegment;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (unsigned long long)enumerateSymbols:(id /* block */)a0;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned char x3[16]; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned int x7; } x4; unsigned long long x5; unsigned char x6; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (BOOL)symbolicateWithOptions:(unsigned long long)a0 pid:(int)a1;
- (BOOL)hasOffsetIntoBinary;
- (BOOL)hasSourceInfo;
- (unsigned long long)numSymbols;
- (void).cxx_destruct;

@end
