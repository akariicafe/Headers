@class NSString, TSUFlushingManager, NSObject;
@protocol NSLocking;

@interface TSUFlushableObject : NSObject <TSUFlushable> {
    int _retainCount;
    int _ownerCount;
    TSUFlushingManager *_flushingManager;
    NSObject<NSLocking> *_flushingManagerIvarLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)init;
- (oneway void)release;
- (void)dealloc;
- (unsigned long long)retainCount;
- (void)unload;
- (void)flush;
- (id)retain;
- (id)ownerAutoreleasedAccess;
- (BOOL)hasFlushableContent;
- (void)addOwner;
- (void)ownerWillAccess;
- (void)ownerDidAccess;
- (id)ownerRetain;
- (void)ownerRelease;

@end
