@class NSString, NSMutableDictionary, NSMutableOrderedSet;

@interface _SBRecentlyUsedSceneIdentityCache : NSObject <BSDescriptionStreamable, NSCopying> {
    NSMutableDictionary *_recentSceneIdentityTokensByPID;
    NSMutableOrderedSet *_recentPIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeSceneIdentityToken:(id)a0 forPID:(int)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSceneIdentityToken:(id)a0 forPID:(int)a1;
- (BOOL)promoteContainedSceneIdentityToken:(id)a0 forPID:(int)a1;
- (void)appendDescriptionToFormatter:(id)a0;

@end
