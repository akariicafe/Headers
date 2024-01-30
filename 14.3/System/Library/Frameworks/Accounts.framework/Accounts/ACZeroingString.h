@interface ACZeroingString : NSString {
    unsigned long long _length;
}

@property (readonly) unsigned short *characters;
@property (readonly) unsigned long long length;

+ (Class)classForKeyedUnarchiver;
+ (BOOL)supportsSecureCoding;
+ (id)_emptyString;

- (id)replacementObjectForCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUTF8String:(const char *)a0;
- (BOOL)_allowsDirectEncoding;
- (void)dealloc;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (Class)classForKeyedArchiver;
- (id)initWithString:(id)a0;
- (id)_compatibleCopy;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (id)initWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end
