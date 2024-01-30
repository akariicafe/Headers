@class NSString, NSMutableDictionary, NSMutableOrderedSet;

@interface _SBRecentlyUsedSceneIdentityCache : NSObject <BSDescriptionStreamable, NSCopying> {
    NSMutableDictionary *_recentSceneIdentityTokensByPID;
    NSMutableOrderedSet *_recentPIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeSceneIdentityToken:(id)a0 forPID:(int)a1;
- (BOOL)promoteContainedSceneIdentityToken:(id)a0 forPID:(int)a1;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addSceneIdentityToken:(id)a0 forPID:(int)a1;

@end
