@class NSString, NSMutableDictionary, SABinary, NSMutableArray;

@interface SASegment : NSObject <SAJSONSerialization, SASerializable> {
    NSMutableArray *_symbols;
    NSMutableDictionary *_inlineSymbols;
    unsigned long long _length;
    long long _offsetIntoBinary;
    NSMutableDictionary *_instructions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) SABinary *binary;
@property (readonly) NSString *name;
@property (readonly) unsigned long long length;
@property (readonly) long long offsetIntoBinary;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (id)instructionAtOffsetIntoSegment:(unsigned long long)a0;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned char x2[16]; char x3[64]; long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (BOOL)hasOffsetIntoBinary;
- (id)initWithBinary:(id)a0 name:(id)a1 length:(unsigned long long)a2 offsetIntoBinary:(long long)a3;
- (void).cxx_destruct;

@end
