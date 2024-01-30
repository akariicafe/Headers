@interface DESNumericMetadataEncoder : NSObject <DESMetadataEncoder>

- (id)zeroWithLength:(unsigned long long)a0;
- (id)encodeNumber:(id)a0 toLength:(unsigned long long)a1;
- (id)encodeNumberVector:(id)a0 toLength:(unsigned long long)a1;
- (id)encodeString:(id)a0 toLength:(unsigned long long)a1;
- (id)encodeStringVector:(id)a0 toLength:(unsigned long long)a1;

@end
