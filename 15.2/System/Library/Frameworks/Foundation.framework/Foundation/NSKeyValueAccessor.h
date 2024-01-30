@class NSString;

@interface NSKeyValueAccessor : NSObject {
    id _containerClassID;
    NSString *_key;
    unsigned long long _hash;
    void /* function */ *_implementation;
    SEL _selector;
    unsigned long long _extraArgumentCount;
    void *_extraArgument1;
    void *_extraArgument2;
    void *_extraArgument3;
}

- (id)initWithContainerClassID:(id)a0 key:(id)a1 implementation:(void /* function */ *)a2 selector:(SEL)a3 extraArguments:(void *[3])a4 count:(unsigned long long)a5;
- (void *)extraArgument1;
- (void *)extraArgument2;
- (id)containerClassID;
- (id)key;
- (unsigned long long)extraArgumentCount;
- (SEL)selector;
- (void)dealloc;

@end
