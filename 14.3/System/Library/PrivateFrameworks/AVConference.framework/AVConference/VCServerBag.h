@interface VCServerBag : NSObject {
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } isLoadedCondition;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } isLoadedMutex;
    BOOL isLoaded;
    id observer;
}

+ (id)sharedInstance;
+ (BOOL)verifyRequiredKeys:(id *)a0;
+ (void)pullStoreBagKeys;
+ (void)clearBagWithRefreshIntervalInSeconds:(int)a0;
+ (void)retrieveBag;
+ (BOOL)verifyRequiredKeys:(id)a0 withError:(id *)a1;
+ (BOOL)verifyRequiredVoiceChatKeys:(id *)a0;
+ (void)checkKeysAgainstHardcodedPrefs:(id)a0;

- (void)waitForBagLoad;
- (id)init;

@end
