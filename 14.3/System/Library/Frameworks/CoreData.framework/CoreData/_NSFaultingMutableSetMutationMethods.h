@interface _NSFaultingMutableSetMutationMethods : NSObject {
    struct objc_method { } *_addObjectMethod;
    struct objc_method { } *_removeObjectMethod;
    struct objc_method { } *_addMethod;
    struct objc_method { } *_removeMethod;
    struct objc_method { } *_intersectMethod;
    struct objc_method { } *_setMethod;
}

+ (id)_createMutationMethodsForClass:(Class)a0 forKey:(id)a1;

@end
