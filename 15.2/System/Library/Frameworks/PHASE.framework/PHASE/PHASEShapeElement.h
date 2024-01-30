@class PHASEShape, PHASEMaterial;

@interface PHASEShapeElement : NSObject {
    PHASEShape *_owner;
}

@property (retain, nonatomic) PHASEMaterial *material;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOwner:(id)a0;
- (id)initWithOwner:(id)a0 material:(id)a1;

@end
