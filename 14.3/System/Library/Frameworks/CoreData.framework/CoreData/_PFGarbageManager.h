@class NSMutableDictionary;

@interface _PFGarbageManager : NSObject {
    NSMutableDictionary *_storeLinksDirs;
    NSMutableDictionary *_filesToCleanUp;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)defaultInstance;

- (id)autorelease;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)retain;

@end
