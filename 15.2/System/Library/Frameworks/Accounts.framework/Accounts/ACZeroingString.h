@interface ACZeroingString : NSString {
    unsigned long long _length;
}

@property (readonly) unsigned short *characters;
@property (readonly) unsigned long long length;

+ (BOOL)supportsSecureCoding;
+ (Class)classForKeyedUnarchiver;
+ (id)_emptyString;

- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithString:(id)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (BOOL)_allowsDirectEncoding;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
- (id)replacementObjectForCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_compatibleCopy;
- (void)dealloc;
- (id)initWithUTF8String:(const char *)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1 encoding:(unsigned long long)a2;
- (Class)classForKeyedArchiver;

@end
