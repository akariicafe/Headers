@interface NSMethodSignature : NSObject {
    struct NSMethodFrameDescriptor { struct NSMethodFrameArgInfo *x0; struct NSMethodFrameArgInfo *x1; unsigned int x2; unsigned int x3; } *_frameDescriptor;
    char *_typeString;
    unsigned long long _flags;
}

@property (readonly) unsigned long long numberOfArguments;
@property (readonly) unsigned long long frameLength;
@property (readonly) const char *methodReturnType;
@property (readonly) unsigned long long methodReturnLength;

+ (void)initialize;
+ (id)signatureWithObjCTypes:(const char *)a0;

- (BOOL)isOneway;
- (unsigned long long)_flags;
- (struct NSMethodFrameArgInfo { struct NSMethodFrameArgInfo *x0; struct NSMethodFrameArgInfo *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned char x6; char x7; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; unsigned char x18 : 1; unsigned char x19 : 1; unsigned char x20 : 1; unsigned char x21 : 1; unsigned char x22 : 1; unsigned char x23 : 1; unsigned char x24; char x25[0]; } *)_argInfo:(long long)a0;
- (id)_typeString;
- (const char *)_cTypeString;
- (BOOL)_isAllObjects;
- (struct NSMethodFrameDescriptor { struct NSMethodFrameArgInfo *x0; struct NSMethodFrameArgInfo *x1; unsigned int x2; unsigned int x3; } *)_frameDescriptor;
- (id)_initWithROMEntry:(const struct CFMethodSignatureROMEntry { struct NSMethodFrameDescriptor *x0; char *x1; unsigned long long x2; } *)a0;
- (id)_signatureForBlockAtArgumentIndex:(long long)a0;
- (BOOL)_isHiddenStructRet;
- (id)_protocolsForObjectAtArgumentIndex:(long long)a0;
- (const char *)getArgumentTypeAtIndex:(unsigned long long)a0;
- (Class)_classForObjectAtArgumentIndex:(long long)a0;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;

@end
