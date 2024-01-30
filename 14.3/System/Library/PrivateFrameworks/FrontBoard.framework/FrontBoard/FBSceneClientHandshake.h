@class NSSet, RBSProcessHandle;

@interface FBSceneClientHandshake : NSObject

@property (readonly, nonatomic) RBSProcessHandle *handle;
@property (readonly, copy, nonatomic) NSSet *remnants;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithHandle:(id)a0 remnants:(id)a1;

@end
