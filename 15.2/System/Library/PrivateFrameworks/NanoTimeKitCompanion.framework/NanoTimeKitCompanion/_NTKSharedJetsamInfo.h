@class NSLock, NSMapTable;

@interface _NTKSharedJetsamInfo : NSObject {
    NSMapTable *_fetchers;
    NSLock *_fetchersLock;
    int _pid;
}

+ (id)sharedJetsamInfo;

- (void).cxx_destruct;
- (void)unregister:(id)a0;
- (id)init;
- (BOOL)getInfoFor:(id)a0 into:(struct jetsam_info { long long x0; long long x1; long long x2; } *)a1;
- (BOOL)resetIntervalFor:(id)a0;

@end
