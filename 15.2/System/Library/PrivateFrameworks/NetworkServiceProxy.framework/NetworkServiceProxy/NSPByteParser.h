@class NSData;

@interface NSPByteParser : NSObject <NSCopying>

@property (readonly) NSData *data;
@property (readonly) const char *bytes;
@property const char *cursor;
@property unsigned long long offset;

- (id)initWithData:(id)a0;
- (id)parseDomainName;
- (unsigned short)parse16Bits:(BOOL *)a0;
- (unsigned int)parse32Bits:(BOOL *)a0;
- (id)parseAddressWithFamily:(unsigned char)a0;
- (const char *)parseBytes:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned char)parse8Bits:(BOOL *)a0;
- (BOOL)advanceBy:(unsigned long long)a0 andCopyTo:(void *)a1;

@end
