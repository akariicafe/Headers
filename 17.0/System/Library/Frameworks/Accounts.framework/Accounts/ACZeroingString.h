@interface ACZeroingString : NSString {
    unsigned long long _length;
}

@property (readonly) unsigned short *characters;
@property (readonly) unsigned long long length;

+ (Class)classForKeyedUnarchiver;
+ (id)_emptyString;
+ (BOOL)supportsSecureCoding;

- (BOOL)_allowsDirectEncoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (id)initWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (Class)classForCoder;
- (id)replacementObjectForCoder:(id)a0;
- (id)_compatibleCopy;
- (id)initWithString:(id)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (id)initWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUTF8String:(const char *)a0;

@end
