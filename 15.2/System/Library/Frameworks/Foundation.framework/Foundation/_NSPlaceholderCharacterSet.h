@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {
    NSCharacterSet *_original;
    NSCharacterSet *_invertedSet;
    struct { unsigned char _inverted : 1; unsigned char _builtin : 1; unsigned char _isCF : 1; unsigned int _reserved : 29; } _flags;
}

- (id)invertedSet;
- (BOOL)hasMemberInPlane:(unsigned char)a0;
- (BOOL)isSupersetOfSet:(id)a0;
- (BOOL)characterIsMember:(unsigned short)a0;
- (BOOL)longCharacterIsMember:(unsigned int)a0;
- (id)bitmapRepresentation;
- (struct __CFCharacterSet { } *)_expandedCFCharacterSet;
- (unsigned long long)retainCount;
- (void)_expandInverted;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSet:(id)a0 options:(unsigned long long)a1;
- (id)retain;
- (id)replacementObjectForKeyedArchiver:(id)a0;
- (id)autorelease;
- (id)replacementObjectForCoder:(id)a0;
- (BOOL)isEmpty;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
