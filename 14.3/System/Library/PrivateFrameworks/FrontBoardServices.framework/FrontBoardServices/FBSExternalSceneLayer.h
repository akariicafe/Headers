@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer

@property (readonly, copy, nonatomic) NSString *sceneID;

- (id)_succinctDescription;
- (id)initWithXPCDictionary:(id)a0;
- (long long)alignment;
- (void).cxx_destruct;
- (BOOL)isExternalSceneLayer;
- (unsigned long long)hash;
- (id)initWithExternalSceneID:(id)a0 level:(double)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithCAContext:(id)a0 fallbackLevel:(double)a1 sceneID:(id)a2;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithExternalSceneID:(id)a0 trackingContext:(id)a1;

@end
