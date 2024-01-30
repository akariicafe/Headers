@interface NSCFCharacterSet : NSMutableCharacterSet

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)invert;
- (id)invertedSet;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (BOOL)characterIsMember:(unsigned short)a0;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (id)bitmapRepresentation;
- (void)makeCharacterSetFast;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)makeCharacterSetCompact;
- (void)formUnionWithCharacterSet:(id)a0;
- (BOOL)allowsWeakReference;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (Class)classForArchiver;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (void)removeCharactersInString:(id)a0;
- (void)addCharactersInString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (oneway void)release;
- (Class)classForKeyedArchiver;

@end
