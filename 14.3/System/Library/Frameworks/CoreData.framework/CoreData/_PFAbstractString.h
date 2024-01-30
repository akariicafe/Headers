@interface _PFAbstractString : NSString

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (Class)classForKeyedUnarchiver;
+ (BOOL)accessInstanceVariablesDirectly;

- (unsigned long long)fastestEncoding;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (const char *)cString;
- (void)dealloc;
- (unsigned long long)smallestEncoding;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (const unsigned short *)_fastCharacterContents;
- (const char *)_fastCStringContents:(BOOL)a0;
- (Class)classForCoder;
- (Class)classForArchiver;

@end
