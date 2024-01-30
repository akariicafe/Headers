@class SCNNode, NSString;

@interface NTKSnowglobeRotatingObjectController : NSObject <NTKSnowglobeSceneSubController> {
    double _offset;
}

@property (retain) SCNNode *node;
@property struct SCNVector3 { float x; float y; float z; } rotationAxis;
@property double rotationSpeed;
@property double rotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)updateAtTime:(double)a0;

@end
