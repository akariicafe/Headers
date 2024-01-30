@class NSMutableDictionary;

@interface CNEnvironmentBase : NSObject {
    NSMutableDictionary *_storage;
}

+ (id)defaultEnvironment;
+ (char *)environmentStackKey;
+ (id)currentEnvironmentForKey:(void *)a0;
+ (id)effectiveReadingStackForKey:(void *)a0;
+ (id)effectiveWritingStackForKey:(void *)a0;
+ (id)currentEnvironment;
+ (id)defaultStack;

- (void)becomeCurrent;
- (void)resignCurrent;
- (void).cxx_destruct;

@end
