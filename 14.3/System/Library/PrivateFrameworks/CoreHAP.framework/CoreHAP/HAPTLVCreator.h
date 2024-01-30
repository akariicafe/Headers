@interface HAPTLVCreator : HMFObject {
    struct { char *ptr; unsigned long long len; unsigned long long maxLen; char *mallocedPtr; unsigned char inlineBuffer[300]; } _tlv;
    BOOL _addHasFailed;
}

+ (id)creator;
+ (id)creatorWithBufferSize:(unsigned long long)a0;

- (id)serialize;
- (void)dealloc;
- (BOOL)addTLV:(unsigned long long)a0 number:(id)a1;
- (BOOL)addTLV:(unsigned long long)a0 length:(unsigned long long)a1 number:(id)a2;
- (BOOL)addTLV:(unsigned long long)a0 data:(id)a1;
- (BOOL)addTLV:(unsigned long long)a0 string:(id)a1;
- (BOOL)addTLV:(unsigned long long)a0 uuid:(id)a1;
- (BOOL)addTLV:(unsigned long long)a0 length:(unsigned long long)a1 floatNumber:(id)a2;
- (id)initWithBufferSize:(unsigned long long)a0;

@end
