@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { unsigned char _inverted : 1; unsigned char _builtin : 1; unsigned char _isCF : 1; unsigned int _reserved : 29; } _flags;
}

- (BOOL)isEmpty;
- (id)retain;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_tryRetain;
- (BOOL)characterIsMember:(unsigned short)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)bitmapRepresentation;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (BOOL)_isDeallocating;
- (id)autorelease;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (id)invertedSet;
- (unsigned long long)retainCount;
- (void)_expandInverted;
- (struct __CFCharacterSet { } *)_expandedCFCharacterSet;
- (id)initWithSet:(id)a0 options:(unsigned long long)a1;

@end
