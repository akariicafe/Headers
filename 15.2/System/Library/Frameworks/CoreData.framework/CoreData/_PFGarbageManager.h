@class NSMutableDictionary, NSMutableSet;

@interface _PFGarbageManager : NSObject {
    NSMutableDictionary *_storeLinksDirs;
    NSMutableSet *_filesToCleanUp;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultInstance;

- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
