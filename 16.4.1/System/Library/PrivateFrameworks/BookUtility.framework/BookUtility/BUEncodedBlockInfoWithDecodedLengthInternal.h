@interface BUEncodedBlockInfoWithDecodedLengthInternal : BUEncodedBlockInfoInternal {
    unsigned long long _decodedLength;
}

- (unsigned long long)decodedLength;
- (id)initWithEncodedLength:(unsigned long long)a0 decodedLength:(unsigned long long)a1;

@end
