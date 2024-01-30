@interface _PFAbstractString : NSString

+ (Class)classForKeyedUnarchiver;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)fastestEncoding;
- (const char *)_fastCStringContents:(BOOL)a0;
- (Class)classForCoder;
- (void)dealloc;
- (unsigned long long)smallestEncoding;
- (id)description;
- (const char *)cString;
- (const unsigned short *)_fastCharacterContents;
- (const char *)cStringUsingEncoding:(unsigned long long)a0;

@end
