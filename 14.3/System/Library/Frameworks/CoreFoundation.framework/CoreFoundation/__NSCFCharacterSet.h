@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)characterIsMember:(unsigned short)a0;
- (void)removeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)invert;
- (void)formUnionWithCharacterSet:(id)a0;
- (void)removeCharactersInString:(id)a0;
- (void)addCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addCharactersInString:(id)a0;
- (void)makeCharacterSetFast;
- (void)formIntersectionWithCharacterSet:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (void)makeCharacterSetCompact;
- (id)invertedSet;
- (unsigned long long)hash;
- (BOOL)isSupersetOfSet:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (id)bitmapRepresentation;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end
