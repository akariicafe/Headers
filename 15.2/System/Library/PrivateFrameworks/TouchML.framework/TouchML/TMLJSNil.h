@interface TMLJSNil : NSObject {
    struct OpaqueJSClass { } *_jsClassRef;
    struct { int version; unsigned int attributes; char *className; struct OpaqueJSClass *parentClass; struct *staticValues; struct *staticFunctions; void /* function */ *initialize; void /* function */ *finalize; void /* function */ *hasProperty; void /* function */ *getProperty; void /* function */ *setProperty; void /* function */ *deleteProperty; void /* function */ *getPropertyNames; void /* function */ *callAsFunction; void /* function */ *callAsConstructor; void /* function */ *hasInstance; void /* function */ *convertToType; } _classDefinition;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)isNil:(id)a0;
+ (id)unwrap:(id)a0;
+ (id)jsValueInContext:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsValueInContext:(id)a0;

@end
