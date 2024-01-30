@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { unsigned char _inverted : 1; unsigned char _builtin : 1; unsigned char _isCF : 1; unsigned int _reserved : 29; } _flags;
}

- (BOOL)characterIsMember:(unsigned short)a0;
- (struct __CFCharacterSet { } *)_expandedCFCharacterSet;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (BOOL)isEmpty;
- (id)autorelease;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)invertedSet;
- (void)_expandInverted;
- (id)initWithSet:(id)a0 options:(unsigned long long)a1;
- (BOOL)isSupersetOfSet:(id)a0;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (id)bitmapRepresentation;

@end
