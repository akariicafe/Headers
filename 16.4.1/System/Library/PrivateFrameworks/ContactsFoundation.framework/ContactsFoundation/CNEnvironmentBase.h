@class NSMutableDictionary;

@interface CNEnvironmentBase : NSObject {
    NSMutableDictionary *_storage;
}

+ (char *)environmentStackKey;
+ (id)defaultStack;
+ (id)defaultEnvironment;
+ (id)currentEnvironment;
+ (id)currentEnvironmentForKey:(void *)a0;
+ (id)effectiveReadingStackForKey:(void *)a0;
+ (id)effectiveWritingStackForKey:(void *)a0;

- (void)resignCurrent;
- (void)becomeCurrent;
- (void).cxx_destruct;

@end
