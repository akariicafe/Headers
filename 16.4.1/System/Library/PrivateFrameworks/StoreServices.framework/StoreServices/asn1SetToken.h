@interface asn1SetToken : asn1Token {
    const char *mReadPointer;
}

- (id)description;
- (void)reset;
- (id)_initWithID:(unsigned long long)a0 class:(unsigned char)a1 length:(unsigned long long)a2 content:(const char *)a3 opaque:(BOOL)a4;
- (id)nextToken;

@end
