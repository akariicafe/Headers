@class CAContext;

@interface FBSCAContextSceneLayer : FBSSceneLayer

@property (readonly, nonatomic) CAContext *CAContext;
@property (readonly, nonatomic) unsigned int contextID;

+ (id)layerWithCAContext:(id)a0;

- (id)_succinctDescription;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isCAContextLayer;
- (id)initWithCAContextID:(unsigned int)a0 level:(double)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithCAContext:(id)a0 contextID:(unsigned int)a1 fallbackLevel:(double)a2;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithCAContext:(id)a0;

@end
