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

- (void)unload;
- (void)flush;
- (unsigned long long)retainCount;
- (id)retain;
- (id)init;
- (void)dealloc;
- (oneway void)release;
- (id)ownerAutoreleasedAccess;
- (BOOL)hasFlushableContent;
- (void)addOwner;
- (void)ownerWillAccess;
- (void)ownerDidAccess;
- (id)ownerRetain;
- (void)ownerRelease;

@end
