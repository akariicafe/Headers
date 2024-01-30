@interface TLSMessage : NSObject

- (BOOL)encodeByte:(unsigned char)a0 buffer:(id)a1;
- (BOOL)encodeUint64:(unsigned long long)a0 buffer:(id)a1;
- (BOOL)encodeVRFOutput:(id)a0 buffer:(id)a1;
- (BOOL)encodeHashValue:(id)a0 buffer:(id)a1;
- (BOOL)encodeBool:(BOOL)a0 buffer:(id)a1;
- (BOOL)encodeExtensions:(id)a0 buffer:(id)a1;
- (const char *)parseByte:(const char *)a0 end:(const char *)a1 result:(char *)a2;
- (const char *)parseUint64:(const char *)a0 end:(const char *)a1 result:(unsigned long long *)a2;
- (const char *)parseVRFOutput:(const char *)a0 end:(const char *)a1 result:(id *)a2;
- (const char *)parseHashValue:(const char *)a0 end:(const char *)a1 result:(id *)a2;
- (const char *)parseBool:(const char *)a0 end:(const char *)a1 result:(BOOL *)a2;
- (const char *)parseExtensions:(const char *)a0 end:(const char *)a1 result:(id *)a2;
- (BOOL)encodeByteArray:(id)a0 minLength:(unsigned long long)a1 maxLength:(unsigned long long)a2 buffer:(id)a3;
- (const char *)parseByteArray:(const char *)a0 end:(const char *)a1 minLength:(unsigned long long)a2 maxLength:(unsigned long long)a3 result:(id *)a4;

@end
