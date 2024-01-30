@class NSString;

@interface FBSExternalSceneLayer : FBSSceneLayer

@property (readonly, copy, nonatomic) NSString *sceneID;

- (id)initWithExternalSceneID:(id)a0 trackingContext:(id)a1;
- (id)initWithXPCDictionary:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (BOOL)isExternalSceneLayer;
- (id)initWithExternalSceneID:(id)a0 level:(double)a1;
- (id)_succinctDescription;
- (id)_initWithCAContext:(id)a0 fallbackLevel:(double)a1 sceneID:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)alignment;
- (unsigned long long)hash;

@end
