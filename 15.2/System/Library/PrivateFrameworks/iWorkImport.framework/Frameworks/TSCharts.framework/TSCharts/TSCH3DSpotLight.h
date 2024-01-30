@class TSCH3DVector;

@interface TSCH3DSpotLight : TSCH3DLight <TSCH3DLightPositionable, TSCH3DLightDirectional> {
    TSCH3DVector *_position;
    TSCH3DVector *_direction;
}

@property (nonatomic) struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } position;
@property (nonatomic) struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } direction;
@property (nonatomic) float cutOff;
@property (nonatomic) float dropOff;

+ (Class)effectClass;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
