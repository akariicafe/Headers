@interface NSCFCharacterSet : NSMutableCharacterSet

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)removeCharactersInString:(id)a0;
- (void)makeCharacterSetFast;
- (id)retain;
- (void)addCharactersInString:(id)a0;
- (void)invert;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (Class)classForKeyedArchiver;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (void)formUnionWithCharacterSet:(id)a0;
- (BOOL)characterIsMember:(unsigned short)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (BOOL)isEqual:(id)a0;
- (id)bitmapRepresentation;
- (unsigned long long)hash;
- (BOOL)retainWeakReference;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (id)invertedSet;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)makeCharacterSetCompact;
- (unsigned long long)retainCount;
- (Class)classForArchiver;

@end
