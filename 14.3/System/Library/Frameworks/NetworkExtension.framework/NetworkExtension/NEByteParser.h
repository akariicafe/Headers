@class NSData;

@interface NEByteParser : NSObject <NSCopying>

@property (readonly) NSData *data;
@property (readonly) const char *bytes;
@property const char *cursor;
@property unsigned long long offset;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (unsigned char)parse8Bits:(BOOL *)a0;
- (BOOL)copyBytes:(unsigned long long)a0 to:(void *)a1;
- (BOOL)advanceBy:(unsigned long long)a0 andCopyTo:(void *)a1;
- (unsigned short)parse16Bits:(BOOL *)a0;
- (unsigned int)parse32Bits:(BOOL *)a0;
- (const char *)parseBytes:(unsigned long long)a0;
- (id)parseDomainName;
- (id)parseAddressWithFamily:(unsigned char)a0;

@end
