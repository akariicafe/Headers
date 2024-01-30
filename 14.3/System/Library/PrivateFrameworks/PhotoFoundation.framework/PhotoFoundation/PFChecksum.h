@interface PFChecksum : NSObject <NSCopying> {
    struct PFChecksumBytes { unsigned char data[16]; } _bytes;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)initWithString:(id)a0;
- (id)string;
- (unsigned long long)hash;
- (id)description;
- (id)initWithBytes:(struct PFChecksumBytes { unsigned char x0[16]; })a0;
- (id)initWithChecksumAsData:(id)a0;
- (struct PFChecksumBytes { unsigned char x0[16]; })checksumBytes;
- (BOOL)isEqualToBytes:(struct PFChecksumBytes { unsigned char x0[16]; })a0;
- (BOOL)isEqual:(id)a0;

@end
