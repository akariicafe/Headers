@class NSString;

@interface NSBoundKeyPath : NSObject {
    id _rootObject;
    NSString *_keyPath;
}

@property id rootObject;
@property (readonly) NSString *keyPath;

+ (id)newKeyPathWithRootObject:(id)a0 keyPathString:(id)a1;
+ (id)keyPathWithRootObject:(id)a0 path:(const char *)a1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)setValue:(id)a0;
- (id)mutableSetValue;
- (id)mutableArrayValue;
- (BOOL)validateValue:(inout id *)a0 error:(out id *)a1;
- (id)value;
- (id)mutableOrderedSetValue;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
