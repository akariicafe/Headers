@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer

@property (readonly, copy, nonatomic) NSString *sceneID;

- (void)encodeWithXPCDictionary:(id)a0;
- (BOOL)isExternalSceneLayer;
- (id)initWithExternalSceneID:(id)a0 trackingContext:(id)a1;
- (long long)alignment;
- (id)initWithXPCDictionary:(id)a0;
- (id)_succinctDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithCAContext:(id)a0 fallbackLevel:(double)a1 sceneID:(id)a2;
- (id)initWithExternalSceneID:(id)a0 level:(double)a1;
- (void).cxx_destruct;

@end
