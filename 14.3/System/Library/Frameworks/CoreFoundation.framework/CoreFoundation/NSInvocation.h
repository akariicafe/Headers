@class NSMethodSignature, NSMutableArray;

@interface NSInvocation : NSObject {
    void *_frame;
    void *_retdata;
    NSMethodSignature *_signature;
    NSMutableArray *_container;
    BOOL *_replacedByPointerBacking;
    unsigned int _magic;
    unsigned char _retainedArgs;
    unsigned char _stackAllocated;
}

@property (readonly, retain) NSMethodSignature *methodSignature;
@property (readonly) BOOL argumentsRetained;
@property id target;
@property SEL selector;

+ (id)_invocationWithMethodSignature:(id)a0 frame:(void *)a1;
+ (unsigned long long)requiredStackSizeForSignature:(id)a0;
+ (id)invocationWithMethodSignature:(id)a0;

- (id)userInfo;
- (void)setUserInfo:(id)a0;
- (BOOL)_hasBlockArgument;
- (id)debugDescription;
- (void)retainArguments;
- (void)getReturnValue:(void *)a0;
- (void)setReturnValue:(void *)a0;
- (void)getArgument:(void *)a0 atIndex:(long long)a1;
- (void)invokeWithTarget:(id)a0;
- (void)setArgument:(void *)a0 atIndex:(long long)a1;
- (void)_addAttachedObject:(id)a0;
- (id)_initWithMethodSignature:(id)a0 frame:(void *)a1 buffer:(void *)a2 size:(unsigned long long)a3;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)invoke;
- (void)invokeUsingIMP:(void /* function */ *)a0;

@end
