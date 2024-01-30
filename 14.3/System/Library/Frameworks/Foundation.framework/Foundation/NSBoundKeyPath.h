@class NSString;

@interface NSBoundKeyPath : NSObject {
    id _rootObject;
    NSString *_keyPath;
}

@property id rootObject;
@property (readonly) NSString *keyPath;

+ (id)newKeyPathWithRootObject:(id)a0 keyPathString:(id)a1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)keyPathWithRootObject:(id)a0 path:(const char *)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)value;
- (unsigned long long)hash;
- (id)mutableSetValue;
- (id)mutableArrayValue;
- (id)mutableOrderedSetValue;
- (BOOL)isEqual:(id)a0;
- (void)setValue:(id)a0;
- (BOOL)validateValue:(inout id *)a0 error:(out id *)a1;

@end
