@interface _PFAbstractString : NSString

+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (Class)classForKeyedUnarchiver;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)smallestEncoding;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;
- (const unsigned short *)_fastCharacterContents;
- (unsigned long long)fastestEncoding;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (Class)classForCoder;
- (const char *)_fastCStringContents:(BOOL)a0;
- (void)dealloc;
- (const char *)cString;

@end
